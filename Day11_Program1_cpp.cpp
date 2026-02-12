#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
    int sqr = sqrt(num);
	if (sqr * sqr == num){
		cout<<"Yes. its perfect Square root..."<<endl;
	}
	else{
		cout<<"No. its not perfect Sqare root..."<<endl;
	}
	
	
	return 0;
}
