#include <stdio.h>
#include <stdlib.h>

int main (){
    int primeiro, segundo;
    printf("Insira o primeiro numero:\n");
    scanf("%i", &primeiro);
    printf("Insira o segundo numero:\n");
    scanf("%i", &segundo);
    if (primeiro > segundo){
        printf("O maior numero e o primeiro: %i \n", primeiro);
    }
    if (segundo > primeiro){
        printf("O maior numero e o segundo: %i \n", segundo);
    }
    if (segundo == primeiro) {
        printf("Os numeros sao iguais\n");
    }
}