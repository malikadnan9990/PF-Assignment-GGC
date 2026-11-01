#include <iostream>
using namespace std;

int main() {
    double ageYears;

    cout << "Enter age in years: ";
    cin >> ageYears;

    double ageMonths = ageYears * 12.0;
    double ageWeeks = ageYears * 52.0;
    double ageDays = ageYears * 365.0;

    cout << "---------------------------------" << endl;
    cout << "Approximate Age in Months: " << ageMonths << endl;
    cout << "Approximate Age in Weeks: " << ageWeeks << endl;
    cout << "Approximate Age in Days: " << ageDays << endl;

    return 0;
}