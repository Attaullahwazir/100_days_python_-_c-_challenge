#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	 int num; // datatype int
	 cout<<"Enter any number: "<<endl;
	 cin>>num;
	 // Method 1: with help of reverse function from algorithm headerfile but this method have one issue 
	 // convert to string with help of string headerfile
	 /*string str_num = to_string(num);
	 reverse(str_num.begin(), str_num.end());
	 cout<<str_num;*/
	 
	 // Method 1: using while loop 
	 int reverse = 0;
	 while (num > 0){
	 	int last_digit = num % 10;
	 	reverse = reverse * 10 + last_digit;
	 	num = num / 10;
	 }
	 cout<<"Reverse of the number is: "<<reverse<<endl;
	 return 0;
	 
}
// Note: both method have issue like its not working for those number which start or end with 0.
// like 02234, 3450 , 340 so on .
