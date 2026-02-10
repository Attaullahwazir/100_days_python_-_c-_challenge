#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the Number: "<<endl;
	cin>>num;
	
	int count = 0;
	while (num > 0){
	    int last_digit = num % 10;  // extract the last digit 
	    count += 1;  // then add 1 to count 
	    num /= 10;   // remove that digit
	}
	
	cout<<"Total digits in that number is: "<<count<<endl;
	
	return 0;
}
