#include <iostream>
using namespace std;
// FUNCTION TO FIND GENERATIONS
void ancestor(int x, char y)
{
    if (y == 'M' || y == 'm')
    {
        if (x == -1)
        {
            cout << "FATHER";
        }
        else if (x == -2)
        {
            cout << "GRANDFATHER";
        }
        else if (x == -3)
        {
            cout << "GREAT GRANDFATHER";
        }
    }
    else if (y == 'F' || y == 'f')
    {
        if (x == -1)
        {
            cout << "MOTHER";
        }
        else if (x == -2)
        {
            cout << "GRANDMOTHER";
        }
        else if (x == -3)
        {
            cout << "GREAT GRANDMOTHER";
        }
    }
} // END OF ANCESTOR FUNCTION
void descendant(int x, char y)
{
    if (y == 'M' || y == 'm')
    {
        if (x == 1)
        {
            cout << "SON";
        }
        else if (x == 2)
        {
            cout << "GRANDSON";
        }
        else if (x == 3)
        {
            cout << "GREAT GRANDSON";
        }
    }
    else if (y == 'F' || y == 'f')
    {
        if (x == 1)
        {
            cout << "DAUGHTER";
        }
        else if (x == 2)
        {
            cout << "GRANDDAUGHTER";
        }
        else if (x == 3)
        {
            cout << "GREAT GRANDDAUGHTER";
        }
    }
} // END OF DESCENDANT FUNTION
void Gen0(int x, char y)
{
    cout << "ME!";
}
int main() // MAIN STARTS HERE
{
    int x;
    char y;
    cout << "Enter the generation you want to find: ";
    cin >> x;
    cout << "Enter your gender: ";
    cin >> y;
    if (x > 0)
    {
        descendant(x, y);
    }
    else if (x < 0)
    {
        ancestor(x, y);
    }
    else
    {
        Gen0(x, y);
    }

    return 0;
} // END OF MAIN FUNCTION