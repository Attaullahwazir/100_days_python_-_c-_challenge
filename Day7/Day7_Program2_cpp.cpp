#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num;
	cout<<"Enter the any number to find it armstrong or not: "<<endl;
	cin>>num;
	
	int sum= 0;
	int original_n = num;
	while (num > 0){
		int last_digit = num % 10;
		sum += pow(last_digit,3);
		num/= 10;
	}
	if (sum == original_n){
		cout<<original_n<<" is armstrong number.. "<<endl;
	}
	else{
		cout<<original_n<<" is not armstrong number.. "<<endl;
	}
	
	return 0;
}
