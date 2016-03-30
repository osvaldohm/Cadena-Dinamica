Leer Cadena
====================
Programa para leer cadenas en C de forma dinámica, de tal fotrma que no es necesario inicializar el arreglo de caracteres con un tamaño en específico.

 - Desarrollado en DevC++ 5.9.2
 - Compilador: GCC 64 bits


### Instrucciones de uso:

#####1. Se incluye el archivo de cabecera
~~~c
#include "Cadena.h"
~~~
#####2. se declara una variable del tipo *String*
~~~c
String cadena;
~~~
#####3. Se implementa la funcion para leer la cadena
~~~c
leerCadena(&String);
~~~
#####4. Se imprime en pantalla. Por ejemplo con un *scanf()*
~~~c
printf("Cadena: \n",cadena);
~~~
###Ejemplo:
~~~c
int main(int argc, char const *argv[]) {
    char opc;
    do{
        String buffer;
        printf("\ningrese cadena: ");
        leerCadena(&buffer);
        printf("\nResultado: %s", buffer);
        printf("\nContinuar? (s/n):\t");
        scanf("%c",&opc);
        fflush( stdin );
    }while(opc == 's' || opc == 'S');
    return (EXIT_SUCCESS);
}
~~~
