//Ejercicio 42//
#include <stdio.h>

// Función que calcula la serie de Fibonacci hasta un número límite dado
void fibonacci(int limit, int fib[])
{
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < limit; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main()
{
    int fib[1000];
    int sum = 0;
    int count = 0;

    // Calcular la serie de Fibonacci hasta 1000
    fibonacci(1000, fib);

    // Calcular la suma y contar la cantidad de números
    for (int i = 0; i < 1000; i++) {
        if (fib[i] > 0 && fib[i] <= 1000) {
            sum += fib[i];
            count++;
        }
    }

    // Calcular y mostrar el promedio entero
    int avg = sum / count;
    printf("El promedio entero de los números de Fibonacci entre 0 y 1000 es: %d\n", avg);

    return 0;
}