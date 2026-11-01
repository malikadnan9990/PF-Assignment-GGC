#include <iostream>
using namespace std;

int main() {
    long long totalSeconds;

    cout << "Enter total number of seconds: ";
    cin >> totalSeconds;

    long long hours = totalSeconds / 3600;
    long long remainingSecondsAfterHours = totalSeconds % 3600;
    long long minutes = remainingSecondsAfterHours / 60;
    long long seconds = remainingSecondsAfterHours % 60;

    cout << "---------------------------------" << endl;
    cout << totalSeconds << " seconds = " 
         << hours << " hour(s), " 
         << minutes << " minute(s), and " 
         << seconds << " second(s)." << endl;

    return 0;
}