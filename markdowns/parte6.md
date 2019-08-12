# Ejercicios prácticos

1. Primer ejercicio práctico:

Implemente una clase "Complejo" que debe tener dos miembros privados de tipo double llamados real_part e img_part.
Además cuenta con métodos que implementan las siguientes operaciones matemáticas entre números complejos: suma, resta, multiplicación, división, conjugado y magnitud (módulo). Dichas operaciones se deben implementar de forma que se puedan utilizar a través de operadores de C++, a excepción de la magnitud (módulo) que se debe implementar como una función de conversión. [Enlace útil 1](https://www.varsitytutors.com/hotmath/hotmath_help/topics/operations-with-complex-numbers) [Enlace útil 2](https://saylordotorg.github.io/text_intermediate-algebra/s08-07-complex-numbers-and-their-oper.html) [Enlace útil 3](https://www.sangakoo.com/es/temas/numeros-complejos-en-forma-polar-modulo-y-argumento)

Para esta clase implemente constructores por defecto, parametrizado y de copia. 

Implemente también un destructor que al ejecutarse imprima este mensaje: "¡Complejo destruido!"

Implemente un sencillo menú de usuario que permita introducir 2 números complejos y aplicar las operaciones sobre ellos.

La función cout de C++ no sabe imprimir en pantalla objetos de la clase Complejo. Para lograr que la función `cout` imprima los números complejos en el formato `a+bi`, con la línea de codigo `cout<<objetoComplejo<<endl;`, es necesario implementar una sobrecarga del operador `<<`. Dicha sobrecarga tiene como tipo de valor de retorno una referencia a un objeto std::ostream y recibe como parámetros de entrada una referencia a un objeto `std::ostream` y una referencia constante a un objeto de la clase Complejo. La funcionalidad se implementa pasandole al objeto de tipo ostream que se recibio a la entrada cada uno de los componentes del formato del número complejo (primero la parte real, luego el signo más o el menos, luego la parte imaginaria y por último la letra i), para esto se debe utilizar el operador `<<` para pasar individualmente cada componente al ojeto ostream. [Enlace útil 4](https://medium.com/@nonuruzun/overloading-input-output-operators-in-c-a2a74c5dda8a) Tip: Para que no tenga que utilizar funciones amigas puede hacer la sobrecarga por fuera de la clase.

2. Segundo ejercicio práctico
