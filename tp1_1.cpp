#include <stdio.h>

int main(){    
    printf("\n Hola mundo!");

    //Declaración de variables y punteros
    int edad=21;
    int *puntero;
    
    //Puntero apunta a la variable edad
    puntero = &edad;

    printf("\n Contenido de puntero: %d", *puntero);
    printf("\n La direcci%cn de memoria almacenada por el puntero es: %p",162, puntero);
    printf("\n La direcci%cn de la variable edad es: %p", 162, &edad);
    printf("\n La direcci%cn de memoria del puntero es: %p", 162, &puntero);
    printf("\n El tama%co de memoria es: %lu", 164, sizeof(edad));

    return 0;
}