# Destructor

El destructor es un método de la clase que se usa para destruir objetos del tipo de la clase, no tiene parámetros de entrada ni valor de retorno.
Para declarar un destructor se utiliza el caracter virgulilla (~) seguido del nombre la clase, es decir, el destructor también se denomina del mismo
modo que la clase. Los destructores se ejecutan automáticamente justo cuando un objeto alcanza el límite de su tiempo de vida. Ese tiempo de vida
está definido por el contexto (`scope`) donde se ha declarado el objeto. Recuerde que un contexto (`scope`) está delimitado en C++ por las llaves
`{` y `}`. El tiempo de vida para un objeto de almacenamiento estático es de toda la ejecución del programa. Mientras que el tiempo de vida de un
objeto de almacenamiento automático depende enteramente de su contexto, si es global o local.

```C++
class NewClass
{
	public:
	~NewClass(); //Declaración del destructor de la clase
};

NewClass::~NewClass(){} //Definición del destructor de la clase
```

Los destructores son especialmente útiles para destruir objetos de almacenamiento dinámico, es decir, aquellos para los que se reserva memoria con
ayuda de un apuntador y el operador `new`. Ese tema se verá más adelante cuando se estudie el manejo dinámico de memoria en C++. En el siguiente
ejemplo se puede observar la ejecución del destructor de una clase. 

```C++ runnable
#include<iostream>
using namespace std;

class NewClass
{
	int x;
	public:
	NewClass(int _x):x(_x){}
	~NewClass();
};

NewClass::~NewClass(){cout<<"Ejecutando destructor...obj"<<x<<endl;} 

NewClass obj1(1); //Objeto de alcance global

int main()
{
	NewClass obj2(2); //Objeto de alcance local
	{
		NewClass obj3(3); //Objeto de alcance local
	}
	
	return 0;
}
```