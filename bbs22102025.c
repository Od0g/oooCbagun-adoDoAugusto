 // Algoritmo Bubble Sort
#include <stdio.h>

int main() {
   int V[10];
   int aux;
   int i, j;

   printf("Digite 10 valores para o vetor:\n");

   for (i = 0; i < 10; i++) {
       printf("V[%d]: ", i + 1);
       scanf("%d", &V[i]);
// Entrada dos valores do vetor   
    }


   for (i = 1; i <= 9; i++) {
       for (j = 1; j <= 10 - i; j++) {
           if (V[j - 1] > V[j]) {
               aux = V[j - 1];
               V[j - 1] = V[j];
               V[j] = aux;
           }
       }
   }

   // Exibir vetor ordenado
   printf("\nVetor ordenado: ");
   for (i = 0; i < 10; i++) {
       printf("%d ", V[i]);
   }
   printf("\n");

   return 0;
}