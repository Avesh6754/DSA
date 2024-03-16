//Write a Program that defines a shape class with a constructor
// that gives value to width and height. 
// Then define two sub-classes triangle and rectangle,
//  that calculate the area of the shape area (). 
//  In the main, define two objects a triangle and a rectangle, 
//  and then call the area() function using these two objects.

#include<iostream>

using namespace std;

class Shape
{
	protected:
	int width,height;
	public:
		Shape()
		{
			cout<<"Enter the widgth : ";
			cin>>width;
			cout<<"Enter the height : ";
			cin>>height;
				
		}
		
};
class Triangle:public Shape
{
	public:
		int area=0;
		void Area()
		{
			
			area=(width*height)/2;
			cout<<"Area of Triangle : "<<area<<endl;
		}
};
class Rectangle:public Shape
{
	public:
		int area=0;
		void Area()
		{
			
			area=(width*height);
			cout<<"Area of Rectangle : "<<area<<endl;
		}
};
main()
{
 Triangle t1;
 
 t1.Area();
 Rectangle r1;
 
 r1.Area();
	
}
