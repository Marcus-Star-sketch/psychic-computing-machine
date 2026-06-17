#include <stdio.h>

int main() {
    printf("Escreva um número que definira o tamanho da piramide: ");
    int tamanho;
    scanf("%d", &tamanho);

    for (int i = 1; i <= tamanho; i++) {
        for (int j = 1; j <= tamanho - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}