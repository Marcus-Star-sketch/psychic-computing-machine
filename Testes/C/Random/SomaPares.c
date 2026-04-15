#include <stdio.h>

int main(){
    int numero;
    int soma = 0;
    int i = 1;
    
    printf("Digite um número:\n");
    scanf("%d",&numero);
    
    for (int i = 1; i <= numero; i++){
        if (i % 2 == 0){
            soma = i;
            printf("%d ",soma);
        }
    }
}