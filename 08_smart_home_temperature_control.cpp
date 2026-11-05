#include <iostream>
using namespace std;

int main() {
    float temperature;

    cout << "Enter room temperature: ";
    cin >> temperature;

    if (temperature > 30) {
        cout << "Turn On the Cooling System";
    }

    return 0;
}
