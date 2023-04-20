/*Ejercicio 39*/
#include <stdio.h>

int main() {
   int num1 = 0, num2 = 1, nextNum = 0;

   printf("Serie de Fibonacci hasta 10000:\n");

   while (nextNum <= 11000) {
      printf("%d ", nextNum);
      num1 = num2;
      num2 = nextNum;
      nextNum = num1 + num2;
   }

   return 0;
}