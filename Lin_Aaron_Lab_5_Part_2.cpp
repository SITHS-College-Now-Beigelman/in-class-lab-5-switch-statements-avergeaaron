// Aaron Lin
// 10/08/2024
// Lab 5 Part 2

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    double GB; //variable for gigabytes
    double hours; //variable for hours
    int quality; //variable for quality
    
    cout << "\nHow much gigabytes do you have on your monthly data plan?\n->"; //question
    cin >> GB; //user input gigabytes value

    cout << "\nWhat quality music do you want to listen to? (1 for low quality, 2 for normal quality, 3 for high quality)\n->"; //question
    cin >> quality; //user input quality

    switch(quality) //select a case with the given variable
    {
    case 1: //if quality = 1
        cout << "\nYou can stream " << (GB*1000)/43.2 << " hours on low quality music" << endl; //prints the amount of hours the user can listen to on low quality
        break; //exits the switch
    case 2: //if quality = 2
        cout << "\nYou can stream " << (GB*1000)/72 << " hours on normal quality music" << endl; //prints the amount of hours the user can listen to on normal quality
        break; //exits the switch
    case 3: //if quality = 3
        cout << "\nYou can stream " << (GB*1000)/115.2 << " hours on high quality music" << endl; //prints the amount of hours the user can listen to on high quality
        break; //exits the switch
    default: //none of the above
        cout << "\nThis input is invalid :(" << endl; //prints This input is invalid :(
    }
    cout << "\nThank you for running this program :)" << endl; //prints Thank you for running this program :)

    return 0; //ends the program

}
/*
How much gigabytes do you have on your monthly data plan?
->5 

What quality music do you want to listen to? (1 for low quality, 2 for normal quality, 3 for high quality)
->1

You can stream 115.741 hours on low quality music

Thank you for running this program :)
*/