#include <stdio.h>
 
int main() {
    int n, i;

    printf("Digite o algarismo: " );
    scanf("%d", &n);

    if (n <= 0 ) {
        printf("Digite um número positivo %d é par\n", n);
    return 1;

    }

    printf("Divisores de %d são: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    
    }
    printf("\n");

    return 0;
}