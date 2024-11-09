//
// Created by Roselyne on 9/30/2024.
//
#include <stdio.h>

int main(void)
{
    //Declarar variables.
    char dia;
    char clima;
    char fin_de_semana;
    char trabajo;

    printf("Buenos dias Oli. ");
    printf("\nHagamos tu intinerario del dia de hoy.");
    printf("\nEL dia de hoy es un dia entre semana?");
    scanf(" %c",&dia);

    if (dia == 's' || dia == 'S') {
        printf("\nHay que prepararnos para la escuela.");
        printf("\nEsta lloviendo?");
        scanf(" %c",&clima);

        if (clima == 's' || clima == 'S') {
            printf("\nTendremos que tomar el autobus.");
            printf("\nAl regresar es momento de darnos una ducha, hacer la tarea, cenar a las 8pm y dormir.");
        }
        if (clima == 'n' || clima == 'N') {
            printf("\nPodemos ir en bici.");
            printf("\nAl regresar es momento de darnos una ducha, hacer la tarea, cenar a las 8pm y dormir.");

        }
    } else if (dia == 'n' || dia == 'N') {
        printf("\nHoy es sabado?");
        scanf(" %c",&fin_de_semana);
        if (fin_de_semana == 'n' || fin_de_semana == 'N'){
            printf("\nVayamos a la piscina.");
            printf("\nVamos en bici.");
            printf("\nAl regresar es momento de darnos una ducha, hacer la tarea, cenar a las 8pm y dormir.");
        }
        if (fin_de_semana == 's' || fin_de_semana == 'S') {
            printf("\nDe acuerdo, vayamos a jugar y entrenar futbol americano.");
            printf("\nPapa ya se fue al trabajo?");
            scanf(" %c",&trabajo);
        } if (trabajo == 's' || trabajo == 'S') {
            printf("\nLlamemos a un taxi.");
            printf("\nAl regresar es momento de darnos una ducha, hacer la tarea, cenar a las 8pm y dormir.");
        } if (trabajo == 'n' || trabajo == 'N') {
            printf("\nPidamos que nos lleve.");
            printf("\nAl regresar es momento de darnos una ducha, hacer la tarea, cenar a las 8pm y dormir.");
        }
    } else {
        printf("\nError por favor solo utilice como respuesta n/N, o s/S.");
    }

    printf("\nFin del programa, Hasta luego :) R.");

}