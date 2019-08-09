/* constructores.h */
#include<string>

using namespace std;

class Constructores
{
	int a;
	double b;
	string c;
	
	public:
	/*Implemente los constructores de esta clase */
	Constructores()=default;
	Constructores(int x, double y, string z){}
	void printInfo(){ cout<<"int a = "<<a<<" double b = "<<b<<" string c = "<<c<<endl; }	
};
