//
// Created by Roselyne on 9/21/2024.
//
#include <stdio.h>

int main(void) {

    //Quermos que el usuario digite un numero y nosotros ser capaces de con el programa mencionarle si es un
    //numero negativo o postivo.
    //Por lo que como siempre declaramos primero nuestras variables.

    float num = 0;
    printf("\nIngrese un numero: ");
    scanf("%f", &num);
    if (num > 0) {
        printf("\nSu numero es positivo");
    } else if (num < 0) {
        printf("\nSu numero es negativo");
    } else {
        printf("\nSu numero es 0");

    }
}