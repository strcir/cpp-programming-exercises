/*
This program determines coins for any amount of change under a dollar.
Author: Strahinja Ciric
sciric@mit.edu
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

void compute_coins(int coin_value, int& num, int& amount_left);

int main()
{
    int num, amount_left;
    char proceed = 'n';
    do //perform at least one calculation
    {
        cout << "Enter the amount of change in cents:\n";
        cin >> amount_left;
        cout << endl << amount_left << " cents can be given as\n";
        compute_coins(25, num, amount_left);
        cout << num << " quarter(s) ";
        compute_coins(10, num, amount_left);
        cout << num << " dime(s) and ";
        compute_coins(1, num, amount_left);
        cout << num << " penny(pennies).\n\n";
        char letter;
        cout << "Do you want to enter another amount? (y/n)\n"; //ask to repeat
        cin >> proceed;
    } while (proceed == 'y' || proceed == 'Y'); //repeat if asked
    return 0;
}

void compute_coins(int coin_value, int& num, int& amount_left)
{
    num = amount_left / coin_value;
    amount_left %= coin_value;
}
