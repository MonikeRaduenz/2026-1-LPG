#include <stdlib.h>
#include <stdio.h>

#define L 2
#define C 3

int main()
{
    int indice = 0, matriz[L][C], soma = 0;
    printf("Insira os valores da matriz:\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%d valor:\n", indice + 1);
            scanf("%d", &matriz[i][j]);            
            indice++;
        }
    }
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            soma += matriz[i][j];            
        }
    }
    printf("Soma dos valores: %d", soma);
}
