#include <stdio.h>

int main() {
    int qtdAlunos, i, aprovados =0;
    float media;
    
    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &qtdAlunos);
    
    for (i = 1; i <= qtdAlunos; i++) {
        printf("Digite a média final do aluno %d: ", i);
        scanf("%f", &media);
        
        if (media >= 6.0) {
                aprovados++;
        }
    }
    
    printf("Quantidade de alunos aprovados por média : %d\n", aprovados);
    return 0;
}
