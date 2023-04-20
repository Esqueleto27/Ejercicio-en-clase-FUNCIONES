//Ejercicio 26//
#include <stdio.h>

int main()
{
    int num = 0, cantidad = 0;
    float suma = 0;
    printf("Programa que calcula el promedio de una lista de N numeros \n\n");
    printf("Ingresa tu numero uno por uno porfavor \n");
    printf("Cuantos digitos tiene tu numero: ");
    scanf("%d", &cantidad);

    for(int i = 1; i <= cantidad; i++){
            printf("Numero %d:", i);
            scanf("%d", &num);
            suma = suma + num;
    }

    suma = suma / cantidad;
    printf("Su promedio es: %f", suma);

    return 0;
}