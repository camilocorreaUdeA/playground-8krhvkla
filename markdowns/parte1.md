# Variables y métodos `static`

Al interior de la definición de una clase se utiliza la palabra reservada `static` para declarar miembros de la clase que no están ligados
a ninguna instancia (objeto) de la misma. Por tanto, no se necesita declarar ningun objeto de dicha clase para poder acceder a esos miembros.
[static: cppreference.com](https://en.cppreference.com/w/cpp/language/static)

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

@[Luke, how many stars are there in these galaxies?]({"stubs": ["src/Exercises/Universe.cpp"],"command": "sh /project/target/run.sh"})

