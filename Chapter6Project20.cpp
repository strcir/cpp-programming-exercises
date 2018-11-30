/*
This program counts the number of words in a chosen text file.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 30 Mar. 2014.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string filename;
    string word;
    ifstream fin;
    cout << "Input the name of a file for a word count, then press enter.\n";
    cin >> filename;
    fin.open(filename.c_str());
    if (fin.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    int count = 0;
    while (! fin.eof())
    {
        fin >> word;
        count++;
    }
    cout << "The file contains " << count << " words.\n";
    fin.close();
    char letter;
    cout << "Enter any letter to end the program.\n";
    cin >> letter;
    return 0;
}
