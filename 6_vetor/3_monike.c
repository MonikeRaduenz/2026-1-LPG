#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main()
{
    int vetor[TAMANHO];
    int indice = 0;
    int soma = 0;
    float media = 0;
    for(int i = 0; i < TAMANHO; i++){
        indice = indice + 1;
        printf("Insira o %i valor:\n", indice);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / TAMANHO;
    printf("Media dos valores: %2.f \n", media);
    printf("Valores acima da media: \n");
    for(int i = 0; i < TAMANHO; i++){
        if(vetor[i] > media){
            printf("[%d]", vetor[i]);
        }
    }

}