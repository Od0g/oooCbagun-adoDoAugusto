#include <stdio.h>

int main() {
    int vetor [5];
    int i, j, aux;

    for (i = 0; i <5 ; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);    
    }
    printf("\n");
}
