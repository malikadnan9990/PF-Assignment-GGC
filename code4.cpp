#include <iostream>
using namespace std;

int main() {
    double basicSalary, hra, medicalAllowance;

    cout << "Enter basic monthly salary: ";
    cin >> basicSalary;
    cout << "Enter House Rent Allowance (HRA): ";
    cin >> hra;
    cout << "Enter Medical Allowance: ";
    cin >> medicalAllowance;

    double grossSalary = basicSalary + hra + medicalAllowance;

    cout << "---------------------------------" << endl;
    cout << "Gross Salary: Rs. " << grossSalary << endl;

    return 0;
}