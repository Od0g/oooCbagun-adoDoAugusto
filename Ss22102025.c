#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int i, j, min, aux;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    
    srand(time(NULL));

    
    for (i = 0; i < tamanho; i++) {
        numeros[i] = rand() % 100;
    }

    
    printf("\nVetor original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    
    for (i = 0; i < (tamanho - 1); i++) {
        min = i;
        for (j = (i + 1); j < tamanho; j++) {
            if (numeros[j] < numeros[min])
                min = j;
        }
        if (i != min) {
            aux = numeros[i];
            numeros[i] = numeros[min];
            numeros[min] = aux;
        }
    }

    
    printf("\nVetor ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
