/*
This program converts weight measurements from Imperial to metric.
Author: Strahinja Ciric
sciric@mit.edu
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

void input(istream& ins, double& pounds, double& ounces);

void output(ostream& outs, double kilograms);

double metric_weight(double pounds, double ounces);

int main()
{
    char proceed = 'n';
    do //perform at least one conversion
    {
        double pounds, ounces, kilograms;
        input(cin, pounds, ounces);
        kilograms = metric_weight(pounds, ounces);
        output(cout, kilograms);
        char letter;
        cout << "Do you want to enter another weight? (y/n)\n"; //ask to repeat
        cin >> proceed;
    } while (proceed == 'y' || proceed == 'Y'); //repeat if asked
    return 0;
}

void input(istream& ins, double& pounds, double& ounces)
{
    cout << "Enter the number of pounds in the weight:\n";
    ins >> pounds;
    cout << "Enter the number of ounces in the weight:\n";
    ins >> ounces;
    return;
}

void output(ostream& outs, double kilograms)
{
    double grams = (kilograms - static_cast<int>(kilograms)) * 1000;
    int kilograms_int = static_cast<int>(kilograms);
    outs << "The metric weight is " << kilograms_int << "kg and " << grams << "g.\n";
    return;
}

double metric_weight(double pounds, double ounces)
{
    pounds = pounds + (ounces / 16);
    double kilograms = (pounds / 2.2046);
    return kilograms;
}
