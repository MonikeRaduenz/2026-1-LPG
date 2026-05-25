#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 4

int main()
{
    int vetor[TAMANHO];
    int indice = 0;
    for(int i = 0; i < TAMANHO; i++){
        indice = indice + 1;
        printf("Insira %d valor:", indice);
        scanf("%d", &vetor[i]);
    }
    int maior = -9999999;
    int menor = 9999999;
    for(int i = 0; i < TAMANHO; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Maior valor: %i \n", maior);
    printf("Menor valor: %i \n", menor);
}