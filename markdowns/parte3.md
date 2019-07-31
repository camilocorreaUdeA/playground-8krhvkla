# Miembros de tipo clase (class)

Una clase en C++ puede tener miembros que sean otras clases, es decir, puede existir el anidamiento de clases. Vale la pena aclarar
que no es una práctica muy común el anidamiento de clases en C++, aunque es muy últil en casos muy específicos de diseño de software 
como cuando por ejemplo se quieren ocultar los detalles de implementación de los métodos de una clase mediante delegación en otra clase
interna. Para efectos de está presentación basta con saber que es posible implementar clases al interior de otras clases en C++, y de paso
como hacerlo.

@[Ejemplo clases anidadas]({"stubs": ["src/Anidadas/anid.h","src/Anidadas/anid.cpp","src/Anidadas/main.cpp"],"command": "sh /project/target/run.sh"})