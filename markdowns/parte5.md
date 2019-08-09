# Operadores sobrecargados y métodos de conversión

Los operadores son símbolos (o palabras) que representan y ejecutan una operación en C++. Hay distintos tipos de operadores que están
clasificados de acuerdo al número de operandos sobre los que operan. Luego, hay operadores "unitarios" que reciben un solo operando,
por ejemplo el operador `sizeof`, el operador NOT `~`. Operadores "binarios" que reciben dos operandos, por ejemplo `+`,`-`,`&&`,`%`,
y operadores "ternarios" que reciben tres operandos, de hecho en C++ solo hay uno y es  el operador `?:`.

Así como se puede sobrecargar funciones en C++ también se puede sobrecargar operadores para que tengan una funcionalidad distinta a la original o para que puedan ser implementados en tipos de datos que no los soportan de forma nativa, como las clases que implementa un desarrollador. Es importante mencionar que C++ permite sobrecargar CASI TODOS los operadores existentes pero NO PERMITE implementar nuevos operadores. 

Los operadores de C++ se sobrecargan como si se tratara de la sobrecarga de una función (tipo de dato de retorno + nombre + lista de parámetros de entrada), con la única diferencia de que en lugar del nombre de la función se utilizar la palabra `operator` acompañada del símbolo que designa al operador. Por ejemplo, para implementar una sobrecarga del operador `*` para que "multiplique" objetos de la clase MyClass:

```C++ runnable
#include<iostream>
using namespace std;

class MyClass
{
	int x;
	public:
	MyClass(int n):x(n){}
	
	int operator*(const MyClass& a) const //Sobrecarga del operador '*' 
	{
		return x*a.x;
	}
}; 

int main()
{
	MyClass x(2);
    MyClass y(3);
    int a = x*y;  //Utilizando el operador sobrecargado
    cout<< a <<endl;
	
	return 0;
}
```

En el ejemplo a continuación se sobrecargan los operadores de las operaciones matemáticas básicas para implementar dichas operaciones
en la clase MiVector3D:

@[Ejemplo operadores sobrecargados en la clase MiVector3D]({"stubs": ["src/MiVector/mivector.h", "src/MiVector/mivector.cpp", "src/MiVector/main.cpp"],"command": "sh /project/target/run.sh"})

A ver que aprendimos...

?[¿Cuál de las siguientes es una sobrecarga del operador [ ] corchetes para que se pueda averiguar/modificar el valor de una componente del arreglo de la clase MiVector3D sin necesidad de hacer el arreglo público y tener que acceder con el operador punto?]
-[ ] int operator[](int index)
-[] double operator[](double index)
-[ ] double& operator[](double index)
-[x] double& operator[](int index)

# Métodos de conversión

Los métodos de conversión son funciones de una clase A que convierten (hacen un "casting") un objeto de la clase A en el tipo de dato
que se especifique en el método. Se implementan como una sobrecarga de operador, pero en lugar del símbolo de un operador se usa el tipo de dato hacia el cual se quiere realizar la conversión. 
Para implementar una función de conversión se utiliza la palabra `operator`, luego el tipo de dato al que se requiere convertir y con
la lista de parámetros de entrada vacía ya que un método de conversión no recibe ningún argumento. Tampoco se especifica un tipo de dato de retorno. Ejemplo:

```C++ runnable
#include<iostream>
using namespace std;

class MyClass
{
	int x;
	public:
	MyClass(int a):x(a){}
	operator int(){ return x; } //Método de conversión, convierte un objeto de la clase MyClass en un entero (int)
};

int main()
{
	MyClass obj(8);
	int var = int(obj); //Conversión de MyClass a int (casting explícito de MyClass a int)
	cout<< var <<endl;
	cout<< var + obj << endl; //Conversión de MyClass a int (casting implícito de MyClass a int)
}
```
