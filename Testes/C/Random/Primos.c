
#include <stdio.h>

int main(){

    int numero;
    int i;
    int encontrado = 0;

    printf("Escreva um número para checar se ele é primo:");
    scanf("%d",&numero);

    for (i = 2; i < numero; i++){
        if (numero % i == 0){
            encontrado++;
            break;
        }
        
    }
    
    if (numero <= 1){
        printf("Número invalido.");
    }
    else if (encontrado == 0){
        printf("O número %d é primo.",numero);
    }
    else{
        printf("O número %d não é primo.",numero);
    }
    
    return 0;
}
