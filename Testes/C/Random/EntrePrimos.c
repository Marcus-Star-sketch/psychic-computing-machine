
#include <stdio.h>

int main(){

    int numero;
    int i,j;
    int primo = 1;

    printf("Escreva um número para que os primos entre ele e 1 sejam escritos:");
    scanf("%d",&numero);

    for (i = 2; i < numero; i++){
        primo = 1;
        for (j = 2; j < i; j++){
            if (i % j == 0){
                primo = 0;
                break;
            }
            
        }
        
        if (primo == 1){
            printf("%d ",i);
        }
        


    }
    

}