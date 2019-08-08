#include<iostream>
#include "mivector.h"

using namespace std;

int main()
{
	MiVector3D vec1(1,2,3);
	MiVector3D vec2(10,20,30);
	
	//Suma:	
	MiVector3D suma = vec1 + vec2;
	cout<<"Suma: ";
	cout<<suma.vec[0]<<","<<suma.vec[1]<<","<<suma.vec[2]<<endl;
	
	//Resta:	
	MiVector3D resta = vec2 - vec1;
	cout<<"Resta: ";
	cout<<resta.vec[0]<<","<<resta.vec[1]<<","<<resta.vec[2]<<endl;
	
	//Producto punto:	
	double prodpun = vec2 * vec1;
	cout<<"Producto punto: "<<prodpun<<endl;
	
	//Division por un escalar
	MiVector3D division = vec2/10;
	cout<<"Division: ";
	cout<<division.vec[0]<<","<<division.vec[1]<<","<<division.vec[2]<<endl;
	
	//Potenciacion
	MiVector3D potencia = vec1>>2;
	cout<<"Potenciacion: ";
	cout<<potencia.vec[0]<<","<<potencia.vec[1]<<","<<potencia.vec[2]<<endl;	
	
	return 0;	
}
