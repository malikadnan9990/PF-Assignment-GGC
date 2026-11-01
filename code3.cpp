#include <iostream>
using namespace std;

int main() {
    double m1, m2, m3, m4, m5;

    cout << "Enter marks in Subject 1: ";
    cin >> m1;
    cout << "Enter marks in Subject 2: ";
    cin >> m2;
    cout << "Enter marks in Subject 3: ";
    cin >> m3;
    cout << "Enter marks in Subject 4: ";
    cin >> m4;
    cout << "Enter marks in Subject 5: ";
    cin >> m5;

    double totalMarks = m1 + m2 + m3 + m4 + m5;
    double averageMarks = totalMarks / 5.0;
    double percentage = (totalMarks / 500.0) * 100.0;

    cout << "---------------------------------" << endl;
    cout << "Total Marks: " << totalMarks << " / 500" << endl;
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}