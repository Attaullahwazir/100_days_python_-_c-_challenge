#include<iostream>
using namespace std;
int main()
{
	int num, pow,result=1;
	cout<<"Enter the Number: "<<endl;
	cin>>num;
	cout<<"Enter the Power of number: "<<endl;
	cin>>pow;
	// simple method for loop 
	for (int i=1; i<=pow;i++){
		result *=num;
	}
	cout<<"The power "<<pow<<" of number "<<num<<" is "<<result<<endl;
	

	
	return 0;
}
