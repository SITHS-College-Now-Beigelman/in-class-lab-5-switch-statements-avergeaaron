// Aaron Lin
// 10/08/2024
// Lab 5 Part 1

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//beginning of code
int main() 
{
    double minute; //variable for minutes
    int exercise; //variable for exercises
    double kg; //variable for kilograms
    double cal; //variable for calories

    cout << "\nWhat exercise did you do? (type in 1 for walking slowly, 2 for walking quickly, 3 for jogging)\n-> "; //question
    cin >> exercise; //user input exercise

    cout << "\nHow much kilogram do you weigh\n-> "; //question 
    cin >> kg; //user input kg

    cout << "\nHow much minute did you do?\n-> "; //question
    cin >> minute; //user input minute 

    switch(exercise) //select a case with the given variable
    {
    case 1: //if exercise = 1
        cout << "\nIf you choose walking slowly and for " << minute << " minute(s)." << endl; //states time taken
        cout << "You burn " << (minute) * (2*3.5*kg) / 200 << " calories.\n"; //prints how much calories the user burn for this exercise
        break; //exit the switch
    case 2: //if exercise = 2
        cout << "\nIf you choose walking quickly and for " << minute << " minute(s)." << endl; //states time taken 
        cout << "You burn " << (minute) * (3*3.5*kg) / 200 << " calories.\n"; //prints how much calories the user burn for this exercise
        break; //exit the switch
    case 3: //if exercise = 3
        cout << "If you choose jogging and for " << minute << " minute(s)." << endl; //states time taken
        cout << "You burn " << (minute) * (8.8*3.5*kg) / 200 << " calories.\n"; //prints how much calories the user burn for this exercise
        break; //exit the switch
    default: //none of above
        cout << "Your input is invaild :(" << endl; //prints Your input is invaild :(
    }

    cout << "\nHow much calories do you want to burn?\n-> "; //question
    cin >> cal; //user input calories

    switch(exercise)
    {
    case 1: //if exercise = 1
        cout << "\nIf you want to burn " << cal << " calories. " << "You need to walk slowly for " << (200*cal) / (2*3.5*kg) << " minutes";
        break; //exit the switch
    case 2: //if exercise = 2
        cout << "\nIf you want to burn " << cal << " calories. " << "You need to walk quickly for " << (200*cal) / (3*3.5*kg) << " minutes";
        break; //exit the switch
    case 3: //if exercise = 3
        cout << "\nIf you want to burn " << cal << " calories. " << "You need to jog for " << (200*cal) / (8*3.5*kg) << " minutes";
        break; //exit the switch
    default: //none of above
        cout << "Your input is invaild :(" << endl; //prints Your input is invaild :(
    }

    cout << "\nThank you for running this program :)" << endl; //prints Thank you for running this program :)

    return 0; //ends the program
}

/*
What exercise did you do? (type in 1 for walking slowly, 2 for walking quickly, 3 for jogging)
-> 3

How much kilogram do you weigh
-> 70

How much minute did you do?
-> 30
If you choose jogging and for 30 minute(s).
You burn 323.4 calories.

How much calories do you want to burn?
-> 1000

If you want to burn 1000 calories. You need to jog for 102.041 minutes
Thank you for running this program :)
*/