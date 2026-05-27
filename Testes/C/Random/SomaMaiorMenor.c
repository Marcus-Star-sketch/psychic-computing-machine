#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor, soma;

    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    maior = numeros[0];
    menor = numeros[0];

    for(int i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    soma = maior + menor;

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\nSoma do maior com o menor: %d\n", soma);

    return 0;
}