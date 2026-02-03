// this program is written in dev c++ enviroment 
#include<iostream>
using namespace std;
int main()
{
	int interest_rate, principle, time; // principle means original amount of money borrowed or invested.
	int interest_amount;
	cout<<"Enter the interest rate (e.g 5% or 10% (enter like 5 or 10 not % sign) ).. "<<endl;
	cin>>interest_rate;
	cout<<"Enter the principle (e.g 1000 dollars ) "<<endl;
	cin>>principle;
	cout<<"Enter Time (Usually counted in years)  "<<endl;
	cin>>time;
	// formula of simple interest  
	interest_amount = (interest_rate * principle * time)/100;
	
	cout<<"Simple interest amount is : "<<interest_amount<<endl;
	return 0;
}
