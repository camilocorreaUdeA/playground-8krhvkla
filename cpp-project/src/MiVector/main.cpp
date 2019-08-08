#include<iostream>
#include "mivector.h"

using namespace std;

int main()
{
	MiVector3D vec1(1,2,3);
	MiVector3D vec2(10,20,30);
	
	MiVector3D suma = vec1 + vec2;
	
	cout<<suma.vec[0]<<","<<suma.vec[1]<<","<<suma.vec[2]<<endl;
	
	return 0;	
}