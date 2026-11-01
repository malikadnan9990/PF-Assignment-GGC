#include <iostream>
using namespace std;

int main() {
    double unitsConsumed, pricePerUnit;

    cout << "Enter electricity units consumed: ";
    cin >> unitsConsumed;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    double totalCharges = unitsConsumed * pricePerUnit;

    cout << "---------------------------------" << endl;
    cout << "Total Electricity Charges: Rs. " << totalCharges << endl;

    return 0;
}