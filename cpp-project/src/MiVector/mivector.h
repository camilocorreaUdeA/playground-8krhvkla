/* mivector.h */

#ifndef _MY_VECTOR3D_H
#define _MY_VECTOR3D_H

class MiVector3D
{
	
	public:
	double vec[3];
	MiVector3D(double, double, double);
	MiVector3D(const MiVector3D&) = default;
	MiVector3D operator+(const MiVector3D&); //Suma
	MiVector3D operator-(const MiVector3D&); //Resta
	double operator*(const MiVector3D&); //Producto punto
	MiVector3D operator/(double); //División por un escalar
	MiVector3D operator>>(int);  //Potenciación a n potencia
	
};

#endif