#include <iostream>
using namespace std;

int main() {
    int remainingTime;

    cout << "Enter remaining exam time in minutes: ";
    cin >> remainingTime;

    if (remainingTime <= 5) {
        cout << "Warning: Exam Is About to End";
    }

    return 0;
}
