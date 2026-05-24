#include <stdio.h>
#include <stdlib.h>

int main (){
    int primeiro, segundo, terceiro;
    printf("Insira o primeiro numero:\n");
    scanf("%i", &primeiro);
    printf("Insira o segundo numero:\n");
    scanf("%i", &segundo);
    printf("Insira o terceiro numero:\n");
    scanf("%i", &terceiro);
    if (primeiro > segundo && primeiro > terceiro){
        printf("Primeiro e o maior numero: %i\n", primeiro);
    }
    else if (segundo > primeiro && segundo > terceiro){
        printf("Segundo e o maior numero: %i\n", segundo);
    }
    else {
        printf("Terceiro e o maior numero: %i\n", terceiro);
    }
}    
