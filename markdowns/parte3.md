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

* Constructor por defecto: Es un constructor que no tiene parámetros de entrada, la inicialización de las variables se hace con valores por defecto
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

* Constructor parametrizado: Es un constructor que tiene parámetros de entrada que se utilizan luego en la inicialización de las variables de clase.

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

* Constructor de copia: Es un constructor que tiene como parámetro de entrada una referencia a otro objeto de la misma clase, por tanto las variables
del objeto que se está creando se inicializan con los valores de las variables del objeto que se pasa como parámetro. Por esa misma razón se conoce
como constructor de copia, porque copia los valores de un objeto existente para incializar otro objeto. En la declaración del constructor el parámetro
de entrada debe tener calificación `const` para evitar modificaciones en el objeto que se está copiando.

```C++ runnable
#include<iostream>
using namespace std;

class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int);
	FooClass(const FooClass&); //Constructor de copia
	void printVars();
};

FooClass::FooClass(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

FooClass::FooClass(const FooClass& obj)
{
	x = obj.x;
	y = obj.y;
	z = obj.z;
}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj(10,20,30); //Inicialización con parámetros de entrada
	FooClass fooCopia(fooObj); //Inicialización de fooCopia con los valores de fooObj
	fooCopia.printVars();
	return 0;
}
```
# Consideraciones adicionales acerca de los constructores

Lista de inicialización en constructores por defecto y parametrizados: C++ permite realizar la definición de los constructores por defecto y
parametrizados utilizando una lista de inicialización que se basa en el uso de los operadores dos puntos `:` y paréntesis `()`. Adicionalmente,
vale la pena mencionar que el constructor por defecto se puede definir implícitamente a partir del constructor parametrizado mediante el uso de
valores por defecto para los parametros de entrada de dicho constructor. Observe y ejecute el ejemplo a continuación:

```C++ runnable
#include<iostream>
using namespace std;

class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int);
	void printVars();
};

//Utilizando lista de inicialización y valores por defecto
FooClass::FooClass(int a = 1, int b = 2, int c = 3):x(a), y(b), z(c){}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj1; //Inicialización con valores por defecto
	FooClass fooObj2(123, 234, 345); //Inicialización con parámetros de entrada explícitos
	fooObj1.printVars();
	fooObj2.printVars();
	return 0;
}
```

Otra forma de definir de manera implícita un constructor por defecto puede ser obligandolo a tomar como valores para sus variables los que se le 
asignen a dichas variables directamente en su declaración. Para lograr esto es necesario utilizar el operador de asignación `=` y la palabra reservada
`default` en la declaración del constructor por defecto. Con este procedimiento se le comunica al compilador de C++ que no se va a 
definir un constructor sino que se va a utilizar el constructor por defecto que implementaría por si mismo el compilador.

```C++ runnable
#include<iostream>
using namespace std;

class FooClass
{
	int x = 1, y = 2, z = 3; //Valores asignados a las variables en la declaración
	public:
	FooClass() = default; //Obligando al constructor a tomar los valores de la declaración de las variables
	FooClass(const FooClass&) = default;  //Se va a utilizar el constructor por copia que implementa el compilador
	void printVars();
};

// ¡No hay definición del constructor!

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj1;
	fooObj1.printVars();
	return 0;
}
```
 También existe la posibilidad de inhibir la utilización de cierto tipo de constructor, por ejemplo si en cierta aplicación el desarrollador no 
 desea que los objetos de cierta clase sean copiados entonces puede prohibir la utilización del constructor de copia simplemente mediante el uso
 del operador de asignación `=` y la palabra reservada `delete`.
 
```C++
 class FooClass
{
	int x, y, z; 
	public:
	FooClass() = delete; //Se prohibe la utilización del constructor por defecto
	FooClass(int, int, int); //Único constructor que se puede utilizar
	FooClass(const FooClass&) = delete;  //Se prohibe la utilización del constructor por copia
	void printVars();
};

int main()
{
	FooClass obj1; // ¡Error, constructor por defecto deshabilitado!
	FooClass obj2(1,2,3); // ¡Bien, sin problema!
	FooClass obj3(obj2); // ¡Error, constructor de copia deshabilitado!
}
```

Con el constructor de copia y en general con constructores parametrizados se puede utilizar el operador de asignación `=` para declarar un objeto
y realizar la inicialización. Por ejemplo:

```C++ runnable
#include<iostream>
using namespace std;

class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int); //Constructor parametrizado 
	FooClass(const FooClass&);  //Constructor de copia
	void printVars();
};

FooClass::FooClass(int a = 1, int b = 2, int c = 3):x(a), y(b), z(c){}

FooClass::FooClass(const FooClass& obj):x(obj.x), y(obj.y), z(obj.z){}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj1 = {111,222,333}; //Utilizando el operador de asignación
	fooObj1.printVars();
	FooClass fooObj2 = fooObj1; //Utilizando el operador de asignación
	fooObj2.printVars();
	return 0;
}
```

Para deshabilitar el uso del operador asignación `=` en la declaración e inicialización de un objeto y que dicha declaración solo deba hacerse
tal y como está en la declaración del constructor mismo, entonces se usa la palabra reservada `explicit` en la declaración del constructor. Esta
característica es muy útil cuando en la clase se va a definir una sobrecarga del operador asignación `=`. En la próxima sección se trata el tema
de sobrecarga de operadores.

```C++
class FooClass
{
	int x, y, z;
	public:
	explicit FooClass(int, int, int); //Constructor parametrizado explícito
	explicit FooClass(const FooClass&);  //Constructor de copia explícito
	void printVars();
};

int main()
{
	FooClass fooObj1 = {111,222,333}; // ¡Error, el constructor se declaro explícito!
	FooClass fooObj2(111,222,333); // ¡Bien, así está declarado el constructor!
	FooClass fooObj3 = fooObj2; // ¡Error, el constructor se declaro explícito!
	FooClass fooObj4(fooObj2); // ¡Bien, así está declarado el constructor!
	return 0;
}
```

Dato importante:
Cuando no se declara un constructor por defecto para una clase y en cambio sí se han declarado otros constructores (o por lo menos otro), entonces 
el compilador de C++ NO declarará de manera implícita ningún constructor por defecto.

```C++
class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int); //Declaración constructor parametrizado 	
};

int main()
{
	FooClass fooObj1(111,222,333); // ¡Bien!
	FooClass fooObj2 = {111,222,333}; // ¡También está bien en este caso!
	FooClass fooObj3 ; // ¡Error, C++ ya no declara un constructor por defecto implícito!
	FooClass fooObj4(fooObj2); // ¡Bien, C++ si declara un constructor de copia implícito!
	FooClass fooObj5 = fooObj4; // ¡Está bien en este caso (C++ si declara un constructor de copia implícito)!
	return 0;
}
```

@[Practica lo que has aprendido]({"stubs": ["src/Constructores/Practica.txt","src/Constructores/constructores.h","src/Constructores/main.cpp"],"command": "sh /project/target/run.sh"})
