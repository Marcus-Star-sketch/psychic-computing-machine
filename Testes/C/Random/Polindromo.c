#include <stdio.h>
#include <string.h>

int main(){
    int ehPalindromo(char vetor[], int tamanho){
        for(int i = 0; i < tamanho / 2; i++){
            if(vetor[i] != vetor[tamanho - 1 - i]){
                return 0;
            }
        }
        return 1;
    }
    char palavra[100] = "ovo";
    int tamanho = 3;
    if(ehPalindromo(palavra, tamanho)){
        printf("A palavra é um palíndromo.");
    } else {
        printf("A palavra não é um palíndromo.");
    }
    return 0;
}