#include<iostream>
using namespace std;
int find_gcd(int num1, int num2);
int find_lcm(int num1, int num2);
int main()
{
	int num1, num2, lcm=0;
	cout<<"Enter the first number to find lcm: "<<endl;
	cin>>num1;
	cout<<"Enter the first number to find lcm: "<<endl;
	cin>>num2;
	
	// method 1: simple for loop
	for (int i = 1; i <= num1 * num2 + 1; i++){
		if (i % num1 == 0 && i % num2 == 0){
			lcm = i;
			break;
		}
	}
	cout<<"LCM using simple for loop: "<<lcm<<endl;
	
	
	// using formula 
	int gcd;
	for (int i=1; i<=num1; i++){
		if (num1 % i == 0 && num2 % i == 0){
			gcd = i;
		}
	}
	lcm = (num1 * num2) / gcd;
	cout<<"LCM using formula: "<<lcm<<endl;
	
	
	
	// calling function 
	int result = find_lcm(num1, num2);
    cout<<"LCM using Function: "<<result<<endl;
	return 0;
}


int find_gcd(int num1, int num2){
 int gcd = 1;
for (int i=1; i<=num1 && i <= num2; i++){
		if (num1 % i == 0 && num2 % i == 0){
			gcd = i;
		}  
	
}
   return gcd;
}

int find_lcm(int num1, int num2){
	int gcd= find_gcd(num1,num2);
    int	lcm = (num1 * num2) / gcd;
	
	return lcm;
}


