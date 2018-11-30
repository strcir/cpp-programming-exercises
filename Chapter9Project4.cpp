/*
This program contains a function that reverses C strings and a main program to test it.
Author: Strahinja Ciric
sciric@mit.edu
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

void invert(char c_string[], int capacity);

int main()
{
    cout << "Initial strings:\n\n";
    char string_a[] = "Below the thunders of the upper deep,\nfar, far beneath in the abysmal sea,\nhis ancient, dreamless, uninvaded sleep\nthe Kraken sleepeth.";
    char string_b[] = "Lo, a god in the anguish, a god in the chain!\nThe god Zeus hateth sore,\nand his gods hate again,\nas many as tread on his glorified floor,\nbecause I loved mortals too much evermore.";
    cout << string_a << "\n\n";
    cout << string_b << "\n\n";
    invert(string_a, strlen(string_a));
    invert(string_b, strlen(string_b));
    cout << "Reversed strings:\n\n";
    cout << string_a << "\n\n";
    cout << string_b << "\n\n";
    char letter;
    cout << "Enter any letter to end the program.\n";
    cin >> letter;
    return 0;
}

void invert(char c_string[], int capacity)
{
    typedef char* CharArrayPtr;
    CharArrayPtr front, rear;
    char a;
    for (int i = 0; i <= (capacity / 2 - 1); i++)
    {
        front = &c_string[i];
        rear = &c_string[capacity - 1 - i];
        a = *front;
        *front = *rear;
        *rear = a;
    }
    return;
}
