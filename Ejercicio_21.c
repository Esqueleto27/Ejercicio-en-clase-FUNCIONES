//Ejercicio 21//
#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Ingresa un numero entero: ");
    scanf("%d", &num);
    
    while(num != 0) {
        digit = num % 10; // extrae el último dígito
        sum += digit; // agrega el dígito a la suma
        num /= 10; // elimina el último dígito del número
    }
    
    printf("La suma de los digitos es: %d", sum);
    return 0;
}