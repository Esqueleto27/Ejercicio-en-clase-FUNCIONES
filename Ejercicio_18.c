//Ejercicio 18//
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ingrese dos numeros enteros separados por un espacio: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Los multiplos de 5 de %d son: ", num1);
    for (int i = 1; i <= 10; i++) {
        int multiplo = num1 * i;
        if (multiplo % 5 == 0) {
            printf("%d ", multiplo);
        }
    }
    printf("\n");
    
    printf("Los multiplos de 5 de %d son: ", num2);
    for (int i = 1; i <= 10; i++) {
        int multiplo = num2 * i;
        if (multiplo % 5 == 0) {
            printf("%d ", multiplo);
        }
    }
    printf("\n");
    
    return 0;
}