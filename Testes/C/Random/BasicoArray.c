#include <stdio.h>

int main(){

    int vetor[10], i;
    for(i=0; i<10; i++){
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Escolha uma posicao para mostrar o valor do vetor (0 - 9): ");
    scanf("%d", &i);
    printf("O valor do vetor na posicao %d e: %d\n", i, vetor[i]);

}