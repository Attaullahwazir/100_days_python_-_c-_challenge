#include <iostream>
#include <cmath>   // Required for pow()
#include <iomanip> // Required for setprecision

using namespace std;

int main() {
    double principal, rate, time, earn_interest, n=1; // Compounding: Annually 1, half-annually 2, quarterly 4, monthly 12

    cout<<"Enter the principal: "<<endl; // total amount
    cin>>principal;
    cout<<"enter the interest rate %: "<<endl;
    cin>>rate;
    cout<<"Enter the time: "<<endl;
    cin>>time;
    double interestDecimal = rate / 100.0;
    double calculation = principal * pow((1 + interestDecimal/n), n * time);
    cout<<"The total amount is: "<<calculation<<endl;
    
    earn_interest = calculation - principal;
    cout<<"THe interest profit is: "<<earn_interest<<endl;

    return 0;
}

