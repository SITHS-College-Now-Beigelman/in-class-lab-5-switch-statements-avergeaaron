// Aaron Lin
// 10/08/2024
// Lab 5 Part 3a

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//beginning of code
int main()
{
    srand(time(0)); //rng
    int direct; //variable for the generated number
    int moves = 0; //variable for move = 0
    int north = 0; //variable for north = 0
    int west = 0; //variable for west = 0
    int east = 0; //variable for east = 0
    int south = 0; //variable for south = 0

    cout << "\nRobot is moving..." << endl; //prints Robot is moving...
    
    while(moves < 25) //runs code repeatedly until moves < 25
    {
        moves = moves + 1; //add 1 to move
        direct = rand() % 4 + 1; //direct = to the randomly generated number 1-4

        if(direct == 1) //if direct = 1
        {   
            north = north + 1; //add 1 to north
            south = south - 1; //subract 1 from south
            cout << "\nThe robot is " << north << " north " << south << " south " << east << " east " << west << " west from the starting point\n"; //states the distance the robot is from the starting point
        }
        if(direct == 2) //if direct = 2
        {   
            south = south + 1; //add 1 to south
            north = north - 1; //subract 1 from north
            cout << "\nThe robot is " << north << " north " << south << " south " << east << " east " << west << " west from the starting point\n"; //states the distance the robot is from the starting point
        }
        if(direct == 3) //if direct = 3
        {   
            east = east + 1; //add 1 to east
            west = west - 1; //subract 1 from west
            cout << "\nThe robot is " << north << " north " << south << " south " << east << " east " << west << " west from the starting point\n"; //states the distance the robot is from the starting point
        }
        if(direct == 4) //if direct = 4
        {   
            west = west + 1; //add 1 to west
            east = east - 1; //subract 1 from east
            cout << "\nThe robot is " << north << " north " << south << " south " << east << " east " << west << " west from the starting point\n"; //states the distance the robot is from the starting point
        }
    }

    cout << "\nThank you for running this program :)" << endl; //prints Thank you for running this program :)

    return 0; //ends the code
}
/*
Robot is moving...

The robot is -1 north 1 south 0 east 0 west from the starting point

The robot is -1 north 1 south 1 east -1 west from the starting point

The robot is -1 north 1 south 2 east -2 west from the starting point

The robot is -1 north 1 south 1 east -1 west from the starting point

The robot is 0 north 0 south 1 east -1 west from the starting point

The robot is 0 north 0 south 2 east -2 west from the starting point

The robot is 1 north -1 south 2 east -2 west from the starting point

The robot is 0 north 0 south 2 east -2 west from the starting point

The robot is 1 north -1 south 2 east -2 west from the starting point

The robot is 1 north -1 south 3 east -3 west from the starting point

The robot is 1 north -1 south 4 east -4 west from the starting point

The robot is 2 north -2 south 4 east -4 west from the starting point

The robot is 2 north -2 south 5 east -5 west from the starting point

The robot is 2 north -2 south 4 east -4 west from the starting point

The robot is 2 north -2 south 3 east -3 west from the starting point

The robot is 2 north -2 south 2 east -2 west from the starting point

The robot is 2 north -2 south 1 east -1 west from the starting point

The robot is 2 north -2 south 2 east -2 west from the starting point

The robot is 3 north -3 south 2 east -2 west from the starting point

The robot is 2 north -2 south 2 east -2 west from the starting point

The robot is 2 north -2 south 3 east -3 west from the starting point

The robot is 2 north -2 south 2 east -2 west from the starting point

The robot is 1 north -1 south 2 east -2 west from the starting point

The robot is 1 north -1 south 1 east -1 west from the starting point

The robot is 0 north 0 south 1 east -1 west from the starting point

Thank you for running this program :)
*/