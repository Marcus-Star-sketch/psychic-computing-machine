#include <stdio.h>

int main() {

    int numero;

    printf("Escreva um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }        
        
        printf("\n");

    }

    return 0;

}