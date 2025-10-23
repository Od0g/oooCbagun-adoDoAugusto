// Algoritmo Bubble Sort
#include <stdio.h>
int main() {
   int V[5] = {5, 4, 1, 3, 2};
   int aux;
   int i, j;
   
   for (i = 1; i <= 4; i++) {
       for (j = 1; j <= 5 - i; j++) {
           if (V[j - 1] > V[j]) {
               aux = V[j - 1];
               V[j - 1] = V[j];
               V[j] = aux;
           }
       }
   }
   
   printf("Vetor ordenado: ");
   for (i = 0; i < 5; i++) {
       printf("%d ", V[i]);
   }
   printf("\n");
   return 0;
}