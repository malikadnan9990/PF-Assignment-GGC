#include <iostream>
using namespace std;

int main() {
    double distance, avgConsumption, petrolPrice;

    cout << "Enter distance travelled (km): ";
    cin >> distance;
    cout << "Enter average fuel consumption (km per litre): ";
    cin >> avgConsumption;
    cout << "Enter petrol price per litre: ";
    cin >> petrolPrice;

    double petrolConsumed = distance / avgConsumption;
    double totalFuelCost = petrolConsumed * petrolPrice;

    cout << "---------------------------------" << endl;
    cout << "Petrol Consumed: " << petrolConsumed << " litres" << endl;
    cout << "Total Fuel Cost: Rs. " << totalFuelCost << endl;

    return 0;
}