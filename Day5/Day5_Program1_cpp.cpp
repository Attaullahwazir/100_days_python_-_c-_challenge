#include<iostream>
using namespace std;
int main()
{
	// what is leap year? A leap year have 366 day instead of 365
	// if it divide by 4 or 400 its leap year and if it divide by 100 its not leap year
	   int year;
	   cout<<" Enter the Year number to find its leap year or not: "<<endl;
	   cin>>year;
	   if (year % 4 == 0){
	   	if (year % 100 == 0 && year % 400 != 0){
	   		cout<<"The year "<<year<<". Its not leap year"<<endl;
		   }
		else{
			cout<<" The year "<<year<<". Its leap year.."<<endl;
		}
	   }
	   else{
	   	cout<<"Its not leap year "<<endl;
	   }		
	   return 0;
}

