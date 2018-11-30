/*
This program finds various sums of integers input by the user.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 12 Feb. 2014.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int positive_sum = 0, negative_sum = 0, sum = 0;
    cout << "Enter ten whole numbers.\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10; //get integers from user
    if (n1 > 0) //add each integer to the positive sum if positive
        positive_sum += n1;
    else //otherwise add it to the negative sum
        negative_sum += n1;
    if (n2 > 0)
        positive_sum += n2;
    else
        negative_sum += n2;
    if (n3 > 0)
        positive_sum += n3;
    else
        negative_sum += n3;
    if (n4 > 0)
        positive_sum += n4;
    else
        negative_sum += n4;
    if (n5 > 0)
        positive_sum += n5;
    else
        negative_sum += n5;
    if (n6 > 0)
        positive_sum += n6;
    else
        negative_sum += n6;
    if (n7 > 0)
        positive_sum += n7;
    else
        negative_sum += n7;
    if (n8 > 0)
        positive_sum += n8;
    else
        negative_sum += n8;
    if (n9 > 0)
        positive_sum += n9;
    else
        negative_sum += n9;
    if (n10 > 0)
        positive_sum += n10;
    else
        negative_sum += n10;
    sum = positive_sum + negative_sum; //find the total sum
    cout << "The sum of the positive numbers is " << positive_sum << ".\n"; //output the sums
    cout << "The sum of the negative numbers is " << negative_sum << ".\n";
    cout << "The sum of all the numbers is " << sum << ".\n";
    char letter;
    cout << "Enter any letter to end the program.\n";
    cin >> letter;
    return 0;
}
