#include<iostream>
using namespace std;
class room{
	public:
	double l;
	double b;
	double h;
	
	double calculateArea()
	{
		return l*b;
		
	}
	
	double calculate()
	{
		return l*b*h;
	}
};
int main()
{
	room room1;
	room1.l=20;
	room1.b=10;
	room1.h=7;
	
	cout<<"the area of the room is:" << room1.calculateArea() <<endl;
	cout<<"the volume of the room is:" <<room1.calculate()<<endl;
	
	room room2;
	room2.l=50;
	room2.b=60;
	room2.h=9;
	
	cout<<endl <<"the area of the room is:" << room2.calculateArea() <<endl;
	cout<<"the volume of the room is:" <<room2.calculate()<<endl;
	return 0;
	
}
