#include <stdio.h>

//Declaracion de funciones
int cuadradoNumero(int num);
void cuadradoNumeroVoid(int num);
void mostrarVariable(int *variable); //Recibe la variable desde el puntero
void Invertir(int a, int b);
void orden(int a, int b);

//Programa principal
int main(){    

    //cuadrado de un numero
    int num, resultado;
    printf("\nIngresar un numero: ");
    scanf("%d",&num);
    resultado = cuadradoNumero(num);
    printf("\nEl cuadrado de %d es: %d ", num, resultado);

    //Prueba cuadrado de un numero sin retornar datos
    cuadradoNumeroVoid(num);

    //Prueba mostrar variables
    int *puntero_num; 
    puntero_num = &num;
    mostrarVariable(puntero_num); 

    //Prueba para invertir valores
    int num1,num2, *punt1, *punt2;

    printf("\nIngresar un valor para a: ");
    scanf("%d",&num1);
    printf("Ingresar un valor para b: ");
    scanf("%d",&num2);

    punt1 = &num1;
    punt2 = &num2;

    printf("\nNumeros invertidos\n");
    Invertir(*punt1, *punt2);

    //Prueba para que a = numero_menor y b = numero_mayor 
    orden(*punt1, *punt2);

    //Pares de numeros
    int a,b, *punt_a, *punt_b;
    int pares;
    printf("\nIngresar cuantos pares de numeros desea mostrar: ");
    scanf("%d",&pares);
    for (int i = 1; i <= pares; i++)
    {
        printf("\nIngresar un valor para a: ");
        scanf("%d",&a);
        printf("Ingresar un valor para b: ");
        scanf("%d",&b);

        punt_a = &a;
        punt_b = &b;

        orden(*punt_a, *punt_b);
    }
    
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

void mostrarVariable(int *variable){
    printf("\n\nLa variable ingresada es %d", *variable);
    printf("\n La direccion de la memoria es: %p ", variable);
}

void Invertir(int a, int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("a = %d y b = %d \n", a,b);

}

void orden(int a, int b){
    printf("Numeros ordenados\n");
    if (b < a) {
        Invertir(a,b);
    } else {
        printf("a = %d y b = %d \n", a,b);
    } 
}
