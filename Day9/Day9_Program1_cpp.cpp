#include<iostream>
using namespace std;

int main(){
	
	
	// using for loop and condition 
	int num1, num2, temp;
	
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	for (int i=1; i<=num1; i++){  
		if( num1 % i == 0 && num2 % i == 0){
			cout<<i<<" ";
			temp = i;
		}
	}
	cout<<"\nThe GCD is: "<<temp<<endl;

// calling function of find_GCD() and if you want to run with function uncomment that line and whole int funtion /*
//find_GCD(12,18);


return 0;
}
// this is simple function which use same logic of for loop inside function 
//int find_GCD(int num1, int num2){
//	int temp;
//	for (int i=1; i<=num1; i++){  
//		if( num1 % i == 0 && num2 % i == 0){
//			cout<<i<<" ";
//			temp = i;
//		}
//	}
//  	cout<<"\nThe GCD is: "<<temp<<endl;
//}


