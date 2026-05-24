#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero, antecessor, sucessor;
    printf("Insira um numero inteiro:\n");
    scanf("%i", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("O numero informado foi %i, o antecessor e %i e o sucessor e %i.", numero, antecessor, sucessor);
}