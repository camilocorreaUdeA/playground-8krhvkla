# Operadores sobrecargados y métodos de conversión

Los operadores son símbolos (o palabras) que representan y ejecutan una operación en C++. Hay distintos tipos de operadores que están
clasificados de acuerdo al número de operandos sobre los que operan. Luego, hay operadores "unitarios" que reciben un solo operando,
por ejemplo el operador `sizeof`, el operador NOT `~`. Operadores "binarios" que reciben dos operandos, por ejemplo `+`,`-`,`&&`,`%`,
y operadores "ternarios" que reciben tres operandos, de hecho en C++ solo hay uno y es  el operador `?:`.

Así como se puede sobrecargar funciones en C++ también se puede sobrecargar operadores para que tengan una funcionalidad distinta. Es
importante mencionar que C++ permite sobrecargar CASI TODOS los operadores existentes pero NO PERMITE implementar nuevos operadores. 

Los operadores de C++ se sobrecargan como si se tratara de la sobrecarga de una función, con la única diferencia de que en lugar del
nombre de la función se utilizar la palabra `operator` acompañada del símbolo que designa al operador. Por ejemplo, para implementar
una sobrecarga del operador `*` para que "multiplique" objetos de la clase MyClass:

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
