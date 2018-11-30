/*
This program plays a game of mad libs.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 12 Feb. 2014.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string instructor, name, food, number, adjective, color, animal;
    cout << "Enter the first or last name of your instructor.\n"; //ask the user to fill in words
    cin >> instructor;
    cout << "Enter your name.\n";
    cin >> name;
    cout << "Enter a food.\n";
    cin >> food;
    cout << "Enter a number between 100 and 120.\n";
    cin >> number;
    cout << "Enter an adjective.\n";
    cin >> adjective;
    cout << "Enter a color.\n";
    cin >> color;
    cout << "Enter an animal.\n";
    cin >> animal;
    cout << "\nDear Instructor " << instructor << ",\n\n"; //print the resulting mad lib
    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I came down with a fever of " << number << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely,\n" << name << "\n\n";
    char letter;
    cout << "Enter any letter to end the program.\n";
    cin >> letter;
    return 0;
}
