#include <iostream>
using namespace std;

int main() {
    float speed, speedLimit;

    cout << "Enter vehicle speed: ";
    cin >> speed;
    cout << "Enter speed limit: ";
    cin >> speedLimit;

    if (speed > speedLimit) {
        cout << "Speed Limit Violated";
    }

    return 0;
}
