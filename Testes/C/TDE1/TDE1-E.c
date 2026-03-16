#include <stdio.h>

int main(){

    int numero;

    printf("Escolha um número:\n");
    scanf("%d",&numero);

    if(numero % 3 == 0){
        printf("O número %d é divisível por 3\n",numero);
    }else{
        printf("O número %d não é divisível por 3\n",numero);
    }
    if (numero % 7 == 0){
        printf("O número %d é divisível por 7\n",numero);
    }else{
        printf("O número %d não é divisível por 7\n",numero);
    }
    
    return 0;
    
}
  