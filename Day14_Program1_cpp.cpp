#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the Decimal Number: "<<endl;
	cin>>num;
	// first method 
	int binary;
	int place = 1; //keep track the positon of digit 
	while (num > 0){
		int remainder = num %2;
		binary += remainder * place;
		place *= 10;
		num /= 2; 
		
	}
	
	cout<<"The Binary: "<<binary<<endl;
	return 0;
}
