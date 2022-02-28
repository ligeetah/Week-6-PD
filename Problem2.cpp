#include <iostream>
using namespace std;
// FUNCTION TO FIND VOLUME OF PYRAMID IN REQUIRED UNITS
void pyramidVolume(double l, double w, double h, string unit)
{
    double V;
    V = (l * w * h) / 3;
    double Volume;
    string units;
    if (unit == "meters" || unit == "Meters")
    {
        Volume = V;
        units = "cubic meters";
    }
    else if (unit == "centimeters")
    {
        Volume = V * 1000000;
        units = "cubic centimeters";
    }
    else if (unit == "millimeters")
    {
        Volume = V * 1000000000;
        units = "cubic millimeters";
    }
    else if (unit == "kilometers" || unit == "Kilometers")
    {
        Volume = V / 1000000000;
        units = "cubic kilometers";
    }
    cout << "Volume of Pyramid is: " << Volume << " " << units;
} // PyramidVolume function ends here
int main() // MAIN STARTS HERE
{
    double length, width, height, volume;
    string unit;
    cout << "Enter the length of pyramid in meters: ";
    cin >> length;
    cout << "Enter the width of pyramid in meters: ";
    cin >> width;
    cout << "ENter the height of pyramid in meters: ";
    cin >> height;
    cout << "Enter the units in which you want to find: ";
    cin >> unit;
    pyramidVolume(length, width, height, unit);
    return 0;
} // END OF MAIN FUNCTION