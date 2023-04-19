#include<stdio.h>

int esPrimo(int num);

int main()
{
int num;
printf("Ingrese un numero entero positivo: ");
scanf("%d", &num);

if (esPrimo(num))
    printf("%d es un numero primo.\n", num);
else
    printf("%d no es un numero primo.\n", num);

return 0;
}

int esPrimo(int num)
{
int i;
if (num <= 1)
return 0; // Los numeros menores o iguales a 1 no son primos

for (i = 2; i <= num/2; i++)
{
    if (num % i == 0)
        return 0; // Si es divisible por i, no es primo
}

return 1; // Si no es divisible por ningun i, es primo
}