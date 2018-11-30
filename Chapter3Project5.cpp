/*
This program computes the cost of a long-distance call.
Author: Strahinja Ciric
sciric@mit.edu
Last modified 23 Feb. 2014.
*/

#include <iostream>
using namespace std;

int main()
{
    char day_1;
    char day_2;
    int start_hour = 0;
    int start_minutes = 0;
    int duration = 0;
    double cost = 0.0;
    char colon = ':';
    char repeat = 'n';
    do
    {
        cout << "Enter the first two letters of the day of the week.\n";
        cin >> day_1 >> day_2;
        cout << "Enter the time the call started in 24 hour format.\n";
        cin >> start_hour >> colon >> start_minutes;
        cout << "Enter the duration of the call in minutes.\n";
        cin >> duration;
        switch(day_1)
        {
            case 'S':
            case 's':
                cost = 0.15 * duration;
                break;
            default:
                if (start_hour >= 8 && start_hour < 18)
                {
                    cost = 0.4 * duration;
                }
                else
                {
                    cost = 0.25 * duration;
                }
        }
        cout << "The cost of the call is $" << cost << ".\nDo you want to repeat this calculation? (y/n)\n";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}
