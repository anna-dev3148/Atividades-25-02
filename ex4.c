#include <stdio.h>

int main() {
    int x;
    printf("Digite um número:");
    scanf("%d" , &x);
    
    int divisao = x / 2;
    int resto = x % 2;

    if( resto == 0 ) {
    printf("É Par");
    return 0;
    }
    
    if( resto != 0 ) {
    printf("É Ímpar");
    return 0;
    }
    
    return 0;
} 