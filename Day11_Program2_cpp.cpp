#include<iostream>
using namespace std;
int main()
{
	int num,multi;
	cout<<"Enter the any number: "<<endl;
	cin>>num;
	int i=1;
	while (i <= num){
		multi =i*i;
		cout<<multi<<" ";
		i++;
	}
	
	// from specific number
	int start, end;
	cout<<"\n\nEnter that number where the table start: "<<endl;
	cin>>start;
	cout<<"Enter that number where the table end: "<<endl;
	cin>>end;
	for(int i=start; i<=end;i++){
		int result = i * i;
		cout<<result<<" ";
	} 
	
	return 0;
}
