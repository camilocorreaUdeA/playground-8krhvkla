#include "mivector.h"
#include<cmath>

MiVector3D::MiVector3D(double x=0, double y=0, double z=0)  //Constructor
{
	vec[0] = x;
	vec[1] = y;
	vec[2] = z;
}

MiVector3D MiVector3D::operator+(const MiVector3D& otro) //Suma
{
	double x = vec[0] + otro.vec[0];
	double y = vec[1] + otro.vec[1];
	double z = vec[2] + otro.vec[2];
	
	MiVector3D vec(x, y, z);
	return vec;
}

MiVector3D MiVector3D::operator-(const MiVector3D& otro) //Resta
{
	double x = vec[0] - otro.vec[0];
	double y = vec[1] - otro.vec[1];
	double z = vec[2] - otro.vec[2];
	
	MiVector3D vec(x, y, z);
	return vec;
}

double MiVector3D::operator*(const MiVector3D& otro) //Producto punto
{
	double resultado = (vec[0]*otro.vec[0])+(vec[1]*otro.vec[1])+(vec[2]*otro.vec[2]);
	return resultado;
}

MiVector3D MiVector3D::operator/(double n) //División por un escalar
{
	if(n != 0)
	{
		double x = vec[0]/n;
		double y = vec[1]/n;
		double z = vec[2]/n;
		
		MiVector3D vec(x,y,z);
		return vec;
	}
	MiVector3D vec2(0,0,0);
	return vec2;
}

MiVector3D MiVector3D::operator>>(int n)  //Potenciación a n potencia
{
	double x = pow(vec[0], n);
	double y = pow(vec[1], n);
	double z = pow(vec[2], n);
	
	MiVector3D vec(x, y, z);
	
	return vec;
		
}





