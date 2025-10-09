#include <stdio.h>

int main() {
    int n, i,  valor, encontrado = 0;

printf("Digite tamanhodo vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Dgite o valor a ser buscado: ");
    scanf("%d", &valor);

    for (i = 0; i < n; i++) {
        if (vetor[i] == valor) {
            printf("Valor %d encontrado na posição %d do vetor.\n", valor, i);
            return 0;
        }
    }
    if (!encontrado) {
        printf("Valor %d não encontrado no vetor.\n", valor);

    }
    return 0;


}