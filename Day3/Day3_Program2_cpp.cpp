// this program is written in dev c++ enviroment 
#include<iostream>
using namespace std;
int main()
{
	int num1, num2; // these are two numbers that we want swap their values
	int temp; // temp variable use to store values temporary that help us to exchange values 
	cout<<" Enter the Number 1: "<<endl;
	cin>>num1;
	cout<<" Enter the Number 2: "<<endl;
	cin>>num2;
	cout<<" These are the values Number 1 = "<<num1<< " and Number 2 = "<<num2<<" before swapping..."<<endl;
	// swapping process 
	temp = num1; // num1 assign to temp
	num1 = num2; // now num1 hold the value of num2
	num2 = temp; // and num2 take value from temp which have num1 
	
	cout<<" After Swapping. The values of Number 1 = "<<num1<<" and Number 2 = "<<num2<<"..."<<endl;
	
	return 0;
}
