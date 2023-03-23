#include <stdio.h>

//Declaracion de funciones
int cuadradoNumero(int num);
void cuadradoNumeroVoid(int num);

//Programa principal
int main(){    

    int num;
    printf("Ingresar un numero: ");
    scanf("%d",&num);
    printf("El cuadrado de %d es: %d ", num, cuadradoNumero(num));

    cuadradoNumeroVoid(num);

    return 0;
}

//Definicion de funciones
int cuadradoNumero(int num){
    int cuadrado;
    cuadrado= num*num;
    return cuadrado;
}

void cuadradoNumeroVoid(int num){
    int cuadrado;
    cuadrado= num*num;
    printf("\nEl cuadrado de %d es: %d ", num, cuadrado);
}

