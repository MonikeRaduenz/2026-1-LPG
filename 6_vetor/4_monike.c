#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main()
{
    int vetor[TAMANHO];
    int indice = 0;
    for(int i = 0; i < TAMANHO; i++){
        indice = indice + 1;
        printf("Insira o %i valor:\n", indice);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor:\n");
    for(int i = 0; i < TAMANHO; i++){
        printf("[%d]", vetor[i]);
    }
    printf("\n");    
    printf("Vetor inverso:\n");
    for(int i = (TAMANHO - 1); i >= 0; i--){
        printf("[%d]", vetor[i]);
    }
}