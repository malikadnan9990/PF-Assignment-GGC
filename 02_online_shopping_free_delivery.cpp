#include <iostream>
using namespace std;

int main() {
    float amount;

    cout << "Enter total shopping amount: Rs. ";
    cin >> amount;

    if (amount >= 3000) {
        cout << "Congratulations! You Qualify for Free Delivery";
    }

    return 0;
}
