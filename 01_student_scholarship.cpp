#include <iostream>
using namespace std;

int main() {
    float marks, attendance;

    cout << "Enter student's marks: ";
    cin >> marks;
    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (marks >= 85 && attendance >= 90) {
        cout << "Eligible for Scholarship";
    }

    return 0;
}
