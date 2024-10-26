#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate simple interest with a default interest rate of 15%
double calculateSimpleInterest(double principal, double time, double rate = 15.0) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double principal, time, rate;
    char useDefaultRate;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period (in years): ";
    cin >> time;

    cout << "Do you want to use the default interest rate of 15%? (Y/N): ";
    cin >> useDefaultRate;

    if (useDefaultRate == 'Y' || useDefaultRate == 'y') {
        cout << "Calculating interest with default rate of 15%" << endl;
        cout << fixed << setprecision(2);
        cout << "Simple Interest: " << calculateSimpleInterest(principal, time) << endl;
    } else {
        cout << "Enter the interest rate: ";
        cin >> rate;
        cout << fixed << setprecision(2);
        cout << "Simple Interest: " << calculateSimpleInterest(principal, time, rate) << endl;
    }

    return 0;
}