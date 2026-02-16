#include <iostream>
#include <cmath>   // Required for pow()
#include <iomanip> // Required for setprecision

using namespace std;

int main() {
    double principal, rate, time, amount, ci;
    int n;

    // User Input
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Annual Interest Rate (in %): ";
    cin >> rate;
    cout << "Enter number of compounding periods per year (e.g., 12 for monthly): ";
    cin >> n;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Convert rate to decimal
    double r = rate / 100;

    // Calculation using A = P * (1 + r/n)^(n*t)
    amount = principal * pow((1 + r / n), (n * time));
    ci = amount - principal;

    // Output with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nTotal Amount (A): " << amount << endl;
    cout << "Compound Interest (CI): " << ci << endl;

    return 0;
}

