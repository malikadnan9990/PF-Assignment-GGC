#include <iostream>
using namespace std;

int main() {
    double length, width, height;

    cout << "Enter length of the tank (meters): ";
    cin >> length;
    cout << "Enter width of the tank (meters): ";
    cin >> width;
    cout << "Enter height of the tank (meters): ";
    cin >> height;

    double volume = length * width * height;
    double capacityLitres = volume * 1000.0;

    cout << "---------------------------------" << endl;
    cout << "Volume in cubic meters: " << volume << " m^3" << endl;
    cout << "Capacity in litres: " << capacityLitres << " litres" << endl;

    return 0;
}