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

void delete_repeats(char a[], int& capacity);

int main()
{
    char a[20] = {'a', 'b', 'a', 'c', 'q', 'd', 'c', 'a', 'b', 'm', 'm'};
    int capacity = 11;
    cout << "Here is the initial array:\n\n";
    for (int l = 0; l < capacity; l++)
    {
        cout << a[l] << " ";
    }
    cout << endl << endl;
    delete_repeats(a, capacity);
    cout << "Here is the array with repeats deleted:\n\n";
    for (int l = 0; l < capacity; l++)
    {
        cout << a[l] << " ";
    }
    cout << endl << endl;
    char letter;
    cout << "Enter any letter to end the program.\n";
    cin >> letter;
    return 0;
}

void delete_repeats(char a[], int& capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        for (int j = (i + 1); j < capacity; j++)
        {
            if (a[i] == a[j])
            {
                capacity--;
                for (int k = j; k < capacity; k++)
                {
                    a[k] = a[k+1];
                }
            }
        }
    }
    return;
}
