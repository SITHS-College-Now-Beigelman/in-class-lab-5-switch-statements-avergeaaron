// Aaron Lin
// 10/08/2024
// Lab 5 Part 3b

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//beginning of code
int main()
{
    srand(time(0)); //random number generator
    int direct; //variable for the generated number
    int moves = 0; //moves = 0
    int tmoves = 0; //total moves = 0
    int avgmoves = 0; //average moves equal zero
    int times = 0; //times = 0
    int north = 0; //north = 0
    int west = 0; //west = 0
    int east = 0; //east = 0
    int south = 0; //south = 0

    while(times < 10) //runs code repeatedly until times < 10
    {
        times = times + 1; //add 1 to times
        
        while(north != 3 || east != 2) //runs code when north is not = 3 or east is not = 2
        {
            moves = moves + 1; //add 1 to moves
            direct = rand() % 4 + 1; //direct = to the randomly generated number 1-4

            if(direct == 1) //if direct = 1
            {   
                north = north + 1; //add 1 to north
                south = south - 1; //subract 1 from south
            }
            if(direct == 2) //if direct = 2
            {   
                south = south + 1; //add 1 to south
                north = north - 1; //subract 1 from north
            }
            if(direct == 3) //if direct = 3
            {   
                east = east + 1; //add 1 to east
                west = west - 1; //subract 1 from west
            }
            if(direct == 4) //if direct = 4
            {   
                west = west + 1; //add 1 to west
                east = east - 1; //subract 1 from east
            }
            if(north == 3 && east == 2) //if north = 3 and east = 2
                tmoves = tmoves + moves; //add current moves to tmoves
        }
    }

    avgmoves = tmoves/10; //the average amount of move taken by the robot for 10 times to get to the final destination
    cout << "\nOn average the robot need " << avgmoves << " moves to reach the desired destination"; //print the average of moves for the the robot to reach the final destination
    cout << "\nThank you for running this program :)" << endl; //prints Thank you for running this program :)

    return 0; //end of code
}

/*
On average the robot need 6 moves to reach the desired destination
Thank you for running this program :)
*/