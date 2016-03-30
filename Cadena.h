/** 
* Cabecera
* Programa que permite la lectura de cadenas de forma dinamica, de tal manera que no es necesario 
* incializar un tama�o fijo en un arreglo de caracteres.
* @author Ramses Martinez Ortiz
* @version 1.0.0 29/03/2016
* Implementar utilizando "leerCadena(&buffer)"
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String; /** Define el tipo de dato String como un puntero a variable char*/
/**
* Ejemplo de implementacion en main():
* String buffer;
* leerCadena(&buffer);
* printf();
* printf("Resultado: %s", buffer);
*/
void leerCadena(String*);


void leerCadena(String *cadena){
    char c; /**Almacena el caracter leido */
    int i; /** Contola el tamaño de la cadena */
    String auxiliar = NULL; /** Almacena la cadena antes de ser copiada a la direccion recibida */

    if((*cadena) !=NULL){
        free(*cadena);
        (*cadena) = NULL;
    }
    i = 1; /** Inicializa en uno para almacenar el primer caracter */
    while ((c = getchar()) != '\n'){
        auxiliar = (String) realloc(auxiliar, (i+2)*sizeof(char));
        if(auxiliar == NULL){
            printf("Memoria insuficiente !\n");
            exit(EXIT_FAILURE);
        }
        auxiliar[i-1] = c;
        auxiliar[i] = '\0';
        i++;
    } if(auxiliar == NULL){
        (*cadena) = (String)realloc((*cadena),5*sizeof(char));
        strcpy((*cadena),"NULO");
    }else{
        (*cadena) = (String)realloc((*cadena),(strlen(auxiliar)+1)*sizeof(char));
        strcpy((*cadena),auxiliar);
    }
    free(auxiliar);
}





















