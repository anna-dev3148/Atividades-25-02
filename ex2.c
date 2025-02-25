#include <stdio.h>

int main() {
    int x;
    int  y;
    
    printf("Digite o primeiro número:");
    scanf("%d" , &x) ;
    
    printf("Digite o segundo número:");
    scanf("%d" , &y) ; 
    
    if(x > y){
    printf("Maior: %d\n" , x); 
    }
    
    if(y > x){
    printf("Maior: %d\n" , y); 
    }
    
    if(x < y){
    printf("Menor: %d\n", x);
    }
    
    if(y < x){
    printf("Menor: %d\n", y);
    }
    
    if( x == y)
    printf("Iguais!");
    
    return 0;
}