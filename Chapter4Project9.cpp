/*
This program computes clothing sizes based on information about the user.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 28 Feb. 2014.
*/

#include <iostream>
using namespace std;

double hat_size(double height, double weight);
double jacket_size(double height, double weight, int age);
double waist_size(double weight, int age);

int main()
{
    double height;
    double weight;
    int age;
    char repeat = 'n';
    do
    {
        cout << "Enter your height in inches.\n";
        cin >> height;
        cout << "Enter your weight in pounds.\n";
        cin >> weight;
        cout << "Enter your age in years.\n";
        cin >> age;
        cout << "Your hat size is " << hat_size(height, weight) << ".\nYour jacket size is " << jacket_size(height, weight, age) << ".\nYour waist size is " << waist_size(weight, age) << ".\n";
        cout << "Do you want to repeat this calculation? (y/n)\n";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}

double hat_size(double height, double weight)
{
    return (weight / height * 2.9);
}

double jacket_size(double height, double weight, int age)
{
    double addition = 0;
    if (age > 30)
    {
        addition = static_cast<double>((age - 30) / 10) / 8;
    }
    return (height * weight / 288 + addition);
}

double waist_size(double weight, int age)
{
    double addition = 0;
    if (age > 28)
    {
        addition = static_cast<double>((age - 28) / 2) / 10;
    }
    return (weight / 5.7 + addition);
}
