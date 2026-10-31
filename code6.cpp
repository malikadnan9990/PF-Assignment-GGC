#include <iostream>
using namespace std;

int main() {
    double totalBill;
    int numFriends;

    cout << "Enter total restaurant bill: ";
    cin >> totalBill;
    cout << "Enter number of friends: ";
    cin >> numFriends;

    double perPersonShare = totalBill / numFriends;

    cout << "---------------------------------" << endl;
    cout << "Each friend must pay: Rs. " << perPersonShare << endl;

    return 0;
}