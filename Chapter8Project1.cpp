/*
This program reads in a sentence, corrects the spacing, and capitalizes the first letter.
Author: Strahinja Ciric
sciric@mit.edu
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string word, sentence;
    cout << "Enter a sentence ending with a period:\n";
    int i = 0;
    while ((word.find(".") == string::npos) && (i < 100))
    {
        cin >> word;
        if (i == 0)
        {
            word.at(0) = toupper(word.at(0));
            for (int k = 1; k < word.length(); k++)
            {
                word.at(k) = tolower(word.at(k));
            }
        }
        else
        {
            for (int k = 0; k < word.length(); k++)
            {
                word.at(k) = tolower(word.at(k));
            }
        }
        sentence += (word + " ");
        i++;
    }
    cout << sentence << "\n";
    char letter;
    cout << "Enter any letter to end the program.\n";
    cin >> letter;
    return 0;
}
