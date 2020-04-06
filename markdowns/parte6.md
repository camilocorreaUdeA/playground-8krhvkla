# Ejercicios prácticos

<ol>
<li> Primer ejercicio práctico:

Implemente una clase "Complejo" que debe tener dos miembros privados de tipo double llamados real_part e img_part.
Además cuenta con métodos que implementan las siguientes operaciones matemáticas entre números complejos: suma, resta, multiplicación, división, conjugado y magnitud (módulo). Dichas operaciones se deben implementar de forma que se puedan utilizar a través de operadores de C++, a excepción de la magnitud (módulo) que se debe implementar como una función de conversión. [Enlace útil 1](https://www.varsitytutors.com/hotmath/hotmath_help/topics/operations-with-complex-numbers), [Enlace útil 2](https://saylordotorg.github.io/text_intermediate-algebra/s08-07-complex-numbers-and-their-oper.html), [Enlace útil 3](https://www.sangakoo.com/es/temas/numeros-complejos-en-forma-polar-modulo-y-argumento) <b>NOTA:</b> Para el conjugado puede sobrecargar cualquier otro operador que desee, por ejemplo: %, ~, &&, |, etc. (Preferiblemente un operador unario).

Para esta clase implemente constructores por defecto, parametrizado y de copia. 

Implemente también un destructor que al ejecutarse imprima este mensaje: "¡Complejo destruido!"

Implemente un sencillo menú de usuario que permita introducir 2 números complejos y aplicar las operaciones sobre ellos.

La función cout de C++ no sabe imprimir en pantalla objetos de la clase Complejo. Para lograr que la función `cout` imprima los números complejos en el formato `a+bi`, con la línea de codigo `cout<<objetoComplejo<<endl;`, es necesario implementar una sobrecarga del operador `<<`. Dicha sobrecarga tiene como tipo de valor de retorno una referencia a un objeto `std::ostream` y recibe como parámetros de entrada una referencia a un objeto `std::ostream` y una referencia constante a un objeto de la clase Complejo. La funcionalidad se implementa pasandole al objeto de tipo ostream que se recibio a la entrada cada uno de los componentes del formato del número complejo (primero la parte real, luego el signo más o el menos, luego la parte imaginaria y por último la letra i), para esto se debe utilizar el operador `<<` para pasar individualmente cada componente al objeto ostream. [Enlace útil 4](https://medium.com/@nonuruzun/overloading-input-output-operators-in-c-a2a74c5dda8a), [Enlace útil 5](https://cpppatterns.com/patterns/overload-insertion-operation.html) Tips: Implemente la sobrecarga del operador `<<` como una función amiga de la clase Complejo. Otras funciones útiles para este ejercicio: valor absoluto (abs), potenciación (pow) y raíz cuadrada (sqrt), estas funciones pertenecen a la librería `cmath`. 
</li>
<li> Segundo ejercicio práctico

Desarrolle una aplicación sencilla para construir figuras geométricas, utilizando las siguientes clases:

<ul>
<li>Implemente una clase llamada "Vertice" que tiene dos variables tipo double para almacenar las coordenadas (x, y) del punto en el plano cartesiano donde se ubicará un vértice. Esta clase cuenta con los siguientes métodos: Un constructor parametrizado, un constructor de copia y un método <b>const</b> para averiguar el valor de las coordenadas.</li>
<li>Implemente las siguientes clases: "Circulo", "Triangulo", "Rectangulo", "Pentagono" y "Hexagono". Cada una de estas clases tiene variables para almacenar las coordenadas de sus vértices (¡estas variables son objetos de la clase "Vertice" por supuesto!), un constructor parametrizado <b><u>privado</u></b> para inicializar los vértices, y el constructor de copia por defecto debe estar deshabilitado. Estas clases deben tener métodos para calcular el perímetro y el área de la figura en cuestión. </li>
<li>Implemente una clase "ConstructorFigura" que cuenta con un método (Puede nombrar este método como "Builder") <b>static</b> sobrecargado que recibe como parámetros de entrada los vértices (objetos tipo vértice) para construir una figura y como tipo de retorno la clase de la figura que se va a construir. Por ejemplo, la sobrecarga de este método que recibe 3 vértices debería tener como tipo de retorno la clase "Triangulo". Estos métodos deben verificar que dos vertices no sean iguales o que un mismo vertice no sea común a 3 lados al mismo tiempo (en las figuras donde aplique). Esta clase también debe tener una variable <b>static</b> que lleva la cuenta de cuántas figuras se van creando en la ejecución de la aplicación. <b>NOTA:</b> La sobrecarga que recibe un solo vértice corresponde a la creación de un objeto de la clase "Circulo", cuyo radio es la distancia entre las coordenadas indicadas por el vértice y las coordenadas del punto (0,0).

Para implementar los métodos sobrecargados debe utilizar los constructores privados de las clases de las figuras geométricas, simplemente haciendo un retorno de un objeto del tipo de la figura en cuestión. Averigüe como hacerlo en el siguiente enlace: [Enlace útil 5](https://www.zator.com/Cpp/E4_11_2d1.htm#Constructores%20privados%20y%20protegidos). Recuerde también que para acceder a miembros privados de una clase a través de otra debe existir una "amistad" entre ambas clases ;-)</li>

Desarrolle una pequeña aplicación en la que se puedan crear distintas figuras geométricas y averiguar su perímetro y su área.

</ul>
</li>
</ol>
