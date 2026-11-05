#include <iostream>
using namespace std;

int main() {
    int battery;

    cout << "Enter mobile battery percentage: ";
    cin >> battery;

    if (battery <= 15) {
        cout << "Low Battery! Please Charge Your Phone";
    }

    return 0;
}
