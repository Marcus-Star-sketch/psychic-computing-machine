#include <stdio.h>

int main(){
    
    int numeros[10] = {-3, 4, 7, 9, -2, -1, 1, 12, -19, 42};
    
    printf("Os números dentro do Array são: ");
    for (int i = 0; i <= 9; i++){
        printf("%d,", numeros[i]);
    }
    
    printf("\nOs números dentro do Array após a mudança são: ");
    for (int i = 0; i <= 9; i++){
        if (numeros[i] < 0){
            numeros[i] = 0;
        }
        printf("%d,", numeros[i]);
    }
}