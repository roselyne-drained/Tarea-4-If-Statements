//
// Created by Roselyne on 9/30/2024.
//
#include <stdio.h>

int main(void){

    //Declaramos variables:
    float promedio;
    int beca;

    //Empezamos el inicio de lo que sera el programa.
    printf("Bienvenido usuario.");
    printf("\nPor favor ingrese su promedio par calcular su beca: ");
    scanf("%f", &promedio);

    if (promedio > 10 || promedio < 0) {
        printf("\nError de operacion.");
        printf("\nCantidad inadecuada.");
        printf("\nPor favor ingrese un promedio entre 0 y 10.");
    } else if (promedio >= 9) {
        printf("\nSu beca es del 50%%.");
    } else if (promedio >= 8) {
        printf("\nSu beca es de 30%%.");
    } else if (promedio >= 7) {
        printf("\nSu beca es de 10%%.");
    } else{
        printf("\nNo es posible aplicar para una beca.");
    }

    printf("\nPrograma finalizado, Hasta luego! :P R.");

}