/* constructores.h */

using namespace std;

class Constructores
{
	int a;
	double b;
	string c;
	
	public:
	/*Implemente los constructores de esta clase */
	Constructores()=default;
	Constructores(int x, int y, int z){}
	void printInfo(){ cout<<"int a = "<<a<<" double b = "<<b<<" string c = "<<c<<endl; }	
};
