#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    
    printf("Escolha um número:\n");
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; i++){
        soma = soma + i;
    }
    printf("%d",soma);
    return 0;
}