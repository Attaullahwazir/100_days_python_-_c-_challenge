#include<iostream>
using namespace std;
int main(){
	
	// this program will find prime number 
	
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	bool temp =0; // for tracking the position
	for(int i=2; i<num/2;i++){ // 
		if (num % i == 0){
			temp = 1;
			break;
		}}
		if (temp == 0){
		
		cout<<"the number "<<num<<" is prime number "<<endl;}
		else{
			cout<<num<<" is not prime number.."<<endl;
		}
return 0;
}
