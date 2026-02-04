#include<iostream>
using namespace std;
int main()
{
	float celsius, fahrenheit;
	int option;
	
	cout<<" Enter option 1 for celsius to fahrenheit, 2 for fahrenheit to celsius.. "<<endl;
	cin>>option;
	
	if (option == 1){
		cout<<"Enter the Temperature in Celsius: "<<endl;
		cin>>celsius;
		fahrenheit = (celsius * 9/5) +32;
		cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
	}
	else if (option == 2){
		cout<<"Enter the Temperature in Fahrenheit: "<<endl;
		cin>>fahrenheit;
		celsius = (fahrenheit - 32) * 5/9;
		cout<<"Temperature in Celsius: "<<celsius<<endl;
		
	}
	else{
		cout<<"invalid options ( option should be between 1 and 2) "<<endl;}
		return 0;
}

