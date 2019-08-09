/* main.cpp */

#include<iostream>
#include "constructores.h"

int main()
{
	int x = 50;
	double y = 123456789.987654321;
	string z = "Constructores de clases en C++";
	
	Constructores obj1;
	obj1.printInfo();
	
	Constructores obj2(x,y,z);
	obj2.printInfo();
	
	Constructores obj3(obj2);
	obj3.printInfo();
	
	Constructores obj4 = obj1;
	obj4.printInfo();	
	
	return 0;
}