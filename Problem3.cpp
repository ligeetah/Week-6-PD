#include <iostream>
using namespace std;
// PROGRAM TO FIND THAT A YEAR IS A LEAP YEAR OR NOT
string isLeap(int year)
{
    string LeapYear;
    int mod4, mod100, mod400;
    mod4 = year % 4;
    mod100 = year % 100;
    mod400 = year % 400;
    if ((mod4 == 0 && mod100 == 0 && mod400 == 0) || (mod4 == 0 && mod100 != 0))
    {
        LeapYear = "This is a Leap Year";
    }
    else if ((mod4 != 0) || (mod4 == 0 && mod100 == 0 && mod400 != 0))
    {
        LeapYear = "This is not a Leap Year";
    }
    return LeapYear;
} // End of isLeap Function
int main()
{
    int year;
    string leap;
    cout << "Enter the year: ";
    cin >> year;
    leap = isLeap(year);
    cout << leap;

    return 0;
}