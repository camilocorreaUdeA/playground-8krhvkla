/* anid.cpp */

#include<iostream>
#include "anid.h"

using namespace std;

class BigClass::LittleClass
{
	public:
	void printMsg()
	{
	   cout<<"Oye!!!...Te hablo desde la prision..."<<endl;
        }
};

void BigClass::printMsg()
{
	handler.printMsg();
}
