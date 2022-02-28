#include <iostream>
using namespace std;
// PROGRAM TO FIND NUMBER OF LEAP YEAR BETWEEN TWO YEARS
int isLeap(int year)
{
    int LeapYear;
    int mod4, mod100, mod400;
    mod4 = year % 4;
    mod100 = year % 100;
    mod400 = year % 400;
    if ((mod4 == 0 && mod100 == 0 && mod400 == 0) || (mod4 == 0 && mod100 != 0))
    {
        return 1;
    }

    else if ((mod4 != 0) || (mod4 == 0 && mod100 == 0 && mod400 != 0))
    {
        return 0;
    }

} // End of isLeap Function
int LeapCounter(int year)
{
    int counter = 0;
    if (isLeap(year))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 1))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 2))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 3))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 4))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 5))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 6))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 7))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 8))
    {
        counter = counter + 1;
    }
    if (isLeap(year + 9))
    {
        counter = counter + 1;
    }

    return counter;
}
int main()
{
    int year, fyear, syear;
    int leapcount;

    cout << "Enter two years whose difference is 10 years" << endl;
    cout << "Enter First year: ";
    cin >> fyear;
    cout << "Enter Second year: ";
    cin >> syear;
    leapcount = LeapCounter(fyear);
    cout << "No. of leap years in between " << fyear << " and " << syear << " is " << leapcount;

    return 0;
}