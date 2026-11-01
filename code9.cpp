#include <iostream>
using namespace std;

int main() {
    double purchasePrice, sellingPrice;
    int quantity;

    cout << "Enter purchase price per unit: ";
    cin >> purchasePrice;
    cout << "Enter selling price per unit: ";
    cin >> sellingPrice;
    cout << "Enter quantity sold: ";
    cin >> quantity;

    double totalPurchaseCost = purchasePrice * quantity;
    double totalSalesRevenue = sellingPrice * quantity;
    double profitOrLoss = totalSalesRevenue - totalPurchaseCost;

    cout << "---------------------------------" << endl;
    cout << "Total Purchase Cost: Rs. " << totalPurchaseCost << endl;
    cout << "Total Sales Revenue: Rs. " << totalSalesRevenue << endl;
    cout << "Profit / (Loss) Amount: Rs. " << profitOrLoss << endl;

    return 0;
}