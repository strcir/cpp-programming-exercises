/*
This program finds and prints all prime numbers between 3 and 100.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 23 Feb. 2014.
*/

#include <iostream>
using namespace std;

int main()
{
    bool prime = 1;
    for (int n = 3; n <= 100; n++)
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (n%i == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            cout << n << " ";
        }
        prime = 1;
    }
    char letter;
    cout << "\nEnter any letter to end the program.\n";
    cin >> letter;
    return 0;
}
