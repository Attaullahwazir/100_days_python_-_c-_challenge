#include<iostream>
using namespace std;
int main()
{
	// let we have three different numbers n1, n2, and n3 
	int n1, n2, n3;
	cout<<"Enter Number 1: "<<endl;
	cin>>n1;
	cout<<"Enter Number 2: "<<endl;
	cin>>n2;
	cout<<"Enter Number 3: "<<endl;
	cin>>n3;
	// campare these number with each other throughout condition statement 
	
	if (n1 > n2 && n1 > n3){
		cout<<" Number 1 = "<<n1<<" greater than Number 2 = "<<n2<< " and Number 3 = "<<n3<<endl;
		
	}
	else if (n2 > n1 && n2 > n3){
		cout<<" Number 2 = "<<n2<<" greater than Number 1 = "<<n1<< " and Number 3 = "<<n3<<endl;
		
	}
	else if (n3 > n1 && n3 > n2){
		cout<<" Number 3 = "<<n3<<" greater than Number 1 = "<<n1<< " and Number 2 = "<<n2<<endl;
		
	}
	else {
		cout<<" check out carefully maybe two or three numbers are equal, or you enter wrong input..."<<endl;
	}
	
	return 0;
}
