# Constructores de la clase en C++

Un constructor es un método que se ejecuta de manera automática al instanciar un objeto de una clase. El constructor tiene como finalidad la
incialización de las variables de la clase y posiblemente ejecutar algunos de los métodos de la clase. Una clase puede tener tantos constructores
(sobrecargas) como el desarrollador lo estipule. La característica más sobresaliente de los constructores es que su nombre es el mismo que el de la
clase, es decir, son métodos de la clase que se nombran igual que la clase, y que además no tienen valor de retorno. Las distintas sobrecargas del
constructor de una clase van a depender de las distintas combinaciones de parámetros de entrada de la función. Cuando no se declara un constructor
de manera explícita para una clase entonces C++ se encarga de asignar un constructor implícito por defecto a la clase. En esta sección se hará 
énfasis en 3 tipos de constructores: constructor por defecto, constructor parametrizado y constructor de copia.

```C++
class FooClass
{
	public:
	FooClass(/*Parámetros de entrada opcionales */); //Constructor
};

FooClass::FooClass()
{
	//Líneas de código del constructor
}
```

Por lo general los constructores son de acceso público ya que su uso más común y extendido es la inicialización de las variables de clase al
momento de la declaración de un objeto. Sin embargo, es importante resaltar que los constructores también pueden tener acceso privado que
es mayormente utilizado en ciertos patrones e idiomas especiales de diseño de software en los que se le encarga la instanciación de los objetos a
otros métodos de la clase o a funciones externas amigas de la clase. A continuación se listan los 3 constructores de uso más común en C++:

*Constructor por defecto: Es un constructor que no tiene parámetros de entrada, la inicialización de las variables se hace con valores por defecto
que el programador codifica en el bloque de código del constructor.

```C++ runnable
#include<iostream>
using namespace std;

class FooClass
{
	int x, y, z;
	public:
	FooClass(); //Constructor por defecto
	void printVars();
};

FooClass::FooClass()
{
	x = 1;
	y = 2;
	z = 3;
}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj; //Inicialización por defecto
	fooObj.printVars();
	return 0;
}
```

*Constructor parametrizado: Es un constructor que tiene parámetros de entrada que se utilizan luego en la inicialización de las variables de clase.

```C++ runnable
#include<iostream>
using namespace std;

class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int); //Constructor parametrizado
	void printVars();
};

FooClass::FooClass(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj(10,20,30); //Inicialización con parámetros de entrada
	fooObj.printVars();
	return 0;
}
```

@[Ejemplo clases anidadas]({"stubs": ["src/Anidadas/anid.h","src/Anidadas/anid.cpp","src/Anidadas/main.cpp"],"command": "sh /project/target/run.sh"})
