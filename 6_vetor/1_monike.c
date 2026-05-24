#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 5

int main()
{
    float vetor[TAMANHO], media=0, soma=0;
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma = vetor[i] + soma;
    }
    media = soma / TAMANHO;
    printf("A media dos valores digitados e: %.2f", media);
}
