#include <stdlib.h>
#include <stdio.h>

int main(){
    int primeiro, segundo, soma;
    printf("Insira o primeiro numero:\n");
    scanf("%i", &primeiro);
    printf("Insira o segundo numero:\n");
    scanf("%i", &segundo);
    soma = primeiro + segundo;
    printf("Soma: %i", soma);
}