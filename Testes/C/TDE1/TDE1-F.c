#include <stdio.h>

int main(){

    int numero;
    int i;
    int encontrado = 0;

    printf("Digite um número:\n");
    scanf("%d",&numero);

    for (i = 1; i * i <= numero; i++){
        if(i * i == numero){
            encontrado = 1;
        }
    }
    if (encontrado == 1){
        printf("O número %d é um quadrado perfeito\n",numero);
    }
    else{
        printf("O número %d não é um quadrado perfeito\n",numero);
    }
    
}