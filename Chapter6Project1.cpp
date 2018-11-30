/*
This program searches files of integers and outputs the largest and smallest entries to the screen.
Author: Strahinja Ciric
sciric@mit.edu
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

int main()
{
    ifstream fin;
    string filename;
    int largest, smallest, current;
    cout << "Input the name of a file to search, then press enter.\n";
    cin >> filename;
    fin.open(filename.c_str());
    if (fin.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    fin >> largest;
    smallest = largest;
    while (! fin.eof())
    {
        fin >> current;
        if (current > largest)
        {
            largest = current;
        }
        if (current < smallest)
        {
            smallest = current;
        }
    }
    cout << "The largest integer is " << largest << " and the smallest is " << smallest << ".\n\n";
    char letter;
    cout << "\n\nEnter any letter to end the program.\n";
    cin >> letter;
    return 0;
}
