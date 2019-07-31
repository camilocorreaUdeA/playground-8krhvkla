# Métodos `const`

Un método calificado con la palabra reservada `const` tiene prohibido modificar variables de la clase a menos que estas hayan sido
declaradas con la palabra reservada `mutable`. Un método `const` puede ser invocado tanto por objetos `const` como por objetos que no
son `const`.

```cpp
class FooClass
{
    int metodoConstFoo(int _a) const; //El calificador 'const' va al final de la firma del método
};
```

De acuerdo con lo anterior se puede afirmar que un método debería ser calificado con la palabra `const` siempre y cuando dicho método
no vaya a modificar ninguna de las variables de la clase y que además se pretenda que este método vaya ser accedido por instancias const de la clase
(y no-const también.)

A ver que aprendimos...

?[¿Cuál es el problema en el siguiente fragmento de código?]
-[ ] Ninguno, todo se ve muy bien
-[ ] La clase no tiene variables
-[x] Falta calificar el método como const en la declaración y la definición
-[ ]NS/NR

```cpp
#include<iostream>

using namespace std;

class MyClass
{
	public:
	void sayHelloMethod(); 
};

void MyClass::sayHelloMethod() 
{
	cout<<"Hola Informatica 2!!!"<<endl;
}

int main()
{
	const MyClass miObj;
	miObj.sayHelloMethod();
	return 0;
}
```