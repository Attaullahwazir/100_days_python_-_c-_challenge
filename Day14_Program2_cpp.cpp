#include<iostream>
using namespace std;
int main()
{
	int num, temp, remainder, i, j =0;
	char hexa_digit[50];
	cout<<"Enter the Decimal Number: "<<endl;
	cin>>num;
	temp = num; // we use temp for processing and keep the value of number
	while (temp > 0){
		remainder = temp % 16;
		if ( remainder < 10){
			hexa_digit[j++]= 48 + remainder;  // what is 48? in ascii 0 value equal to 48, 1 equal to 49 and so on
		}
		else{
			hexa_digit[j++] = 55 + remainder; // if remainder graeter or equal  then 10 then 55 + 10 = 65 which is A in ascii, 55 + 11 = 66 which is B and so on
			
		}
		temp /= 16; // remove the last digits that we used already and add to array  
	}
		
		for (i= j-1; i>=0; i--){ 
			cout<<hexa_digit[i];
		}
	return 0;	
	
}
