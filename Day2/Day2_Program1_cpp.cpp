#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Any number to verify its even or odd..."<<endl;
	cin>>num;
	if (num % 2 == 0){
		cout<<"the Number "<<num<<" is even..."<<endl;
	}
	else{
		cout<<"The Number "<<num<<" is odd... "<<endl;
	}
	return 0;
}
