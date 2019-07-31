/* anid.cpp */

#include<iostream>
#include "anid.h"

using namespace std;

class BigClass::LittleClass
{
	public:
	void printMsg();
};

void LittleClass::printMsg()
{
	cout<<"Oye!!!...Te hablo desde la prision..."<<endl;
}

void BigClass::printMsg()
{
	handler.printMsg();
}