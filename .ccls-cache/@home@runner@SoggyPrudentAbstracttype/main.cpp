#include <iostream>
#include "Shape-Area.h"
using namespace std;\
 struct circle
 {
 	float radius;
 };
 struct rectangle
 {
 	float length,width;
 };
 
 struct square{
 	float length;
 };


int main() 
{
	float totalarea,cpm,peri,totalcost;
	circle circle1;
	rectangle rectangle1,rectangle2;
	square square1;
	
	circle1.radius=5;
	rectangle1.length=28;
	rectangle1.width=15;
	rectangle2.length=7;
	rectangle2.width=3;
	square1.length=4;
	
	peri=perimeter(rectangle1.length,rectangle1.width );
	totalarea=areaRectangle( rectangle1.length, rectangle1.width)-(areaCircle(circle1.radius)+areaRectangle( rectangle2.length, rectangle2.width)+areaSquare( square1.length));
	
	cout<<"Total Area:"<<totalarea<<endl<<"Perimeter:"<<peri<<endl<<"Enter the cost of fence per meter:Rs.";
	
	cin>>cpm;
	
	totalcost=costpermeter(cpm,peri);
	
	cout<<endl<<"Total Cost of the fence:Rs."<<totalcost<<"/=";
	}