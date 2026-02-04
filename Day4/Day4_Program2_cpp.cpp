// this program is written in dev c++ enviroment 
#include<iostream>
using namespace std;
int main()
{
	float width, length, area, perimeter; // In area we calculate inside surface
	cout<<"Enter width (e.g. 10m) "<<endl; // and in perimeter we calculate outside of surface.
	cin>>width;
	cout<<"Enter length (e.g. 5m) "<<endl;
	cin>>length;
	area = width * length;
	perimeter = 2*(width + length); 
	cout<<"Area of width "<<width <<" length "<<length<<" is "<<area<<endl;
	cout<<"Perimeter of width "<<width <<" length "<<length<<" is "<<perimeter<<endl;

	return 0;
}
