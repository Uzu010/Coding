
#include <iostream>
#include "Shape-Area.h"

using namespace std;

float areaCircle(float r)
{
	return(22/7.0*r*r);
}

float areaRectangle(float l,float w)
{
	return(l*w);
}

float areaSquare(float l)
{
	return(l*l);
}

float perimeter(float l,float w)
{
	return((l*2)+(w*2));
	
}

float costpermeter(float cost,float perimeter)
{
	return(cost*perimeter);
}
