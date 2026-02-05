// this program is written in dev c++ enviroment 
#include<iostream>
using namespace std;
int main()
{
	unsigned int number; // usigned int used for positve int
	cout<<"Enter Any Positive number: "<<endl;
	cin>>number;
	unsigned int natural_number;
	
	// first method with formula 
	/*formula calculate sum of natural number 
	natural_number = number*(number + 1)/2;
	cout<<"Sum of Nth natural number is: "<<natural_number<<endl;
	*/
	
	// second method to calculate without formula
	for (int i=0; i<=number;i++){
		natural_number += i;
		cout<<" i = "<<i<<" added to natural number = "<<natural_number<<endl;
	}
	cout<<"Sum of Nth natural number is: "<<natural_number<<endl;
	
	return 0;
}

