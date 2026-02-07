#include<iostream>
using namespace std;
int main()
{
  int number, fact=1;
  cout<<"Enter a number to calculate factorial: "<<endl;
  cin>>number;
  /*for(int i=number;i>0;i--){
  	fact *= i;
  }
    
	cout<<"Factorial is: "<<fact<<endl;*/
	
// using while loop 
int i=number;
while (i > 0){
fact *= i;
i-=1;
}
cout<<"factorial is: "<<fact<<endl;


 return 0;
}

