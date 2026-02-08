// what is palindrome number? 
// Palindrome number is these numbers which you write in reverse order they still same like ( 12321, 1221, 1001)

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the any to find its palindrome or not:  "<<endl;
	cin>>num;
	
	// first method using reverse function 
	/*string str = to_string(num); // first we convert num to string then simply use reverse function 
	reverse(str.begin(), str.end());  // algorithm headerfile
	int new_num = stoi(str);  // now we get the reverse but we need to convert to integer again for comparison 

	if (new_num == num){
	  cout<<num<<" is palindrome number: "<<new_num<<" number "<<endl;
	}
	else{
		cout<<num<<" is not palindrome: "<<new_num<<" number"<<endl;
	}*/
	
	
	// second method using while loop direct apply to integers
	int reverse = 0;
	int new_num = num; // we keep our new number which equal to original for comparison 
	while (num > 0){
		int last_digit = num % 10;    // same method which we used for find reverse number
		reverse = reverse * 10 + last_digit;
		num /= 10;
	}
	if ( reverse == new_num){
		cout<<new_num<<" is palindrome "<<reverse<<" number. "<<endl;
	}
	else{
		cout<<new_num<<" is not palindrome "<<reverse<<" number."<<endl;
	}

 return 0;
}

