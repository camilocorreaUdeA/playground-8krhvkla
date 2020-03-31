# Variables y métodos `static`

Al interior de la definición de una clase se utiliza la palabra reservada `static` para declarar miembros de la clase que no están ligados
a ninguna instancia (objeto) de la misma. Por tanto, no se necesita declarar ningun objeto de dicha clase para poder acceder a esos miembros
[(static: cppreference.com)](https://en.cppreference.com/w/cpp/language/static). También vale la pena mencionar que `static` es de utilidad cuando en una clase se desea declarar miembros del mismo tipo de la clase. En C++ no se permite que una clase tenga miembros no-estáticos del mismo tipo de la clase, el compilador arroja el error: `field 'x' has incomplete type 'Class'`.

```cpp

class MyClass
{
	public:
	static int var; //Declaración de una variable 'static'
	static void oneMethod(); //Declaración de un método 'static'
};

int MyClass::var = 100; //Definición de la variable 'static'

void MyClass::oneMethod() //Definición del método 'static'
{
	//lo que hace el método
}
```

Hay que tener en cuenta que la palabra `static` solo debe utilizarse en la declaración del miembro en la definición de la clase. Por fuera de la
clase, en la definición de los miembros no debe usarse (observe el ejemplo anterior). Observe también la utilización del operador de resolución de
contexto (ámbito) `::`

Para acceder a un miembro static `m` de una clase cualquiera `T` se puede hacer de las siguientes formas: 1. Refieriendose a la clase con el operador
de resolución de contexto `T::m` y 2. A través de una expresión de acceso `E` (operadores `.` y `->`) `E.m` o bien `E->m` siempre y cuando `E` se 
se resuelva (retorne) como `T` o `T*` respectivamente. 

?[¿Se puede acceder a un miembro static a través de un objeto de la clase?]
-[ ] No, los miembros static no están ligados a instancias de la clase
-[x] Sí, pueder usarse el operador punto '.'
-[ ] No, es un comportamiento indefinido en C++

```C++ runnable
/* ¡Comprueba tu respuesta aquí mismo! */

#include<iostream>

using namespace std;

class MyClass
{
	public:
	static int var; 
	static void oneMethod(); 
};

int MyClass::var = 100; 

void MyClass::oneMethod() 
{
	cout<<"Hola!!!"<<endl;
	cout<<"MyClass::var = "<<var<<endl;
}

int main()
{
	MyClass miObjeto;
	miObjeto.var = 500;  //Acceso a variable static a través de un objeto
	miObjeto.oneMethod(); //Acceso a método static a través de un objeto
	
	return 0;
}
```

