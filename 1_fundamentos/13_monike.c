#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, temp;
    printf("Insira o valor para A:\n");
    scanf("%i", &a);
    printf("Insira o valor para B:\n");
    scanf("%i", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Valores trocados:\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);    
}