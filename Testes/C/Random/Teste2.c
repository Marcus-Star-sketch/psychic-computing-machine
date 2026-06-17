#include <stdio.h>

void Madona(int numero1, int numero2) {
    printf("O resultado da soma é: %d\n", numero1 + numero2);
    printf("O resultado da subtração é: %d\n", numero1 - numero2);
    printf("O resultado da multiplicação é: %d\n", numero1 * numero2);
    printf("O resultado da divisão é: %d\n", numero1 / numero2);
    printf("O resultado do módulo é: %d\n", numero1 % numero2); 
}

int main() {
    Madona (10, 5);

    return 0;
}