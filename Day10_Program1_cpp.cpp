#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the Number: "<<endl;
	cin>>num;
	int sum = 0; 
	while (num > 0) { 
	int last_digit = num % 10; // simply we extract last digit and add to sum 
	sum += last_digit;
	num = num / 10; 
}

cout<<"The sum: "<<sum<<endl;
return 0;
}

