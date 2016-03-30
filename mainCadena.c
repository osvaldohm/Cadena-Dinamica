/**
* Programa que permite la lectura de cadenas de forma dinamica, de tal manera que no es necesario 
* incializar un tamaño fijo en un arreglo de caracteres.
* @author Ramses Martinez Ortiz
* @version 1.0.0 29/03/2016
*/

#include "Cadena.h"

int main(int argc, char const *argv[]) {
	char opc;
	do{
		String buffer;
	    printf("\nIngrese una cadena: ");
	    leerCadena(&buffer);
		printf("\nResultado: %s", buffer);
	    printf("\nContinuar? (s/n):\t");
	    scanf("%c",&opc);
	    fflush( stdin );
	}while(opc == 's' || opc == 'S');
	return (EXIT_SUCCESS);
}

