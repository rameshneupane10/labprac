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
	room room1,room2;
	cout<<"enter the length,breadth and height of room1:"<<endl;
	cin>>room1.l>>room1.b>>room1.h;
	
	cout<<"enter the length,breadth and height of room2:"<<endl;
	cin>>room2.l>>room2.b>>room2.h;
	
	cout<<"the area of the room 1 and room2 is:" << room1.calculateArea() <<"and"<<room2.calculateArea() <<endl;
	cout<<"the volume of the room 1 and room2  is:" <<room1.calculate() <<room2.calculate() <<endl;
	
	return 0;
}
