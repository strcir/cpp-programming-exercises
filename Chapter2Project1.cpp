/*
This program finds the weights of cereal boxes in metric tons.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 12 Feb. 2014.
*/

#include <iostream>
using namespace std;

int main()
{
    const double OUNCES_PER_TON = 35273.92;
    double ounces, tons, boxes;
    char proceed = 'n';
    do //perform at least one conversion
    {
        cout << "Enter the weight of a package of cereal in ounces: ";
        cin >> ounces;
        tons = ounces/OUNCES_PER_TON; //find weight of a box in tons
        cout << "The weight in metric tons is " << tons << ".\n";
        boxes = OUNCES_PER_TON/ounces; //find number of boxes in a ton
        cout << "In order to have a metric ton of cereal, you would need " << boxes << " boxes.\n";
        char letter;
        cout << "Do you want to enter another weight? (y/n)\n"; //ask to repeat
        cin >> proceed;
    } while (proceed == 'y' || proceed == 'Y'); //repeat if asked
    return 0;
}
