#include<iostream>
using namespace std;
int main()
{
	int value1, value2, result=0;
	char opr;
	cout<<"Enter value 1 for Calculation..."<<endl;
	cin>>value1;
	cout<<"Enter Operator (+, -, *, /) "<<endl;
	cin>>opr;
	cout<<"Enter value 2 for Calculation..."<<endl;
	cin>>value2;
	if (opr == '+'){
		result = value1 + value2;
		cout<<" Result of "<<value1 <<" "<<opr<<" "<<value2<<" is "<<result<<endl;
	}
	 else if (opr == '-'){
		result = value1 - value2;
		cout<<" Result of "<<value1 <<" "<<opr<<" "<<value2<<" is "<<result<<endl;
	}
	else if (opr == '*'){
		result = value1 * value2;
		cout<<" Result of "<<value1 <<" "<<opr<<" "<<value2<<" is "<<result<<endl;
	}
	else  if (opr == '/'){
		   if (value2 != 0){
			result = value1 / value2;
		    cout<<" Result of "<<value1 <<" "<<opr<<" "<<value2<<" is "<<result<<endl;}
		    else{
		    	cout<<"Division by zero is not allowed.";
			}
}
	else {
		cout<<"You Enter Wrong "<<opr<<" Operator"<<endl;
	}
		
	return 0;
}
