#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	cout<<"Enter Any Number: "<<endl;
	cin>>num;
	if (num < 0){
		cout<<"The number must be positive integer..."<<endl;
		return 1;
	}
	else{
		for (int i=1; i <num-1; i++){
			if (num % i == 0){
				int temp = i;
				sum += i;
	         	cout<<temp<<" ";}
	         	else{
	         		continue;
				 }
		}}
		
		
	if (sum == num){
		cout<<" = "<<sum<<" Its Pertect Number "<<endl;
	}
	else{
		cout<<"No, its not perfect number.."<<endl;
	}
	
	return 0;
}
