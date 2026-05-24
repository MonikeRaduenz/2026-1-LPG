#include <stdlib.h>
#include <stdio.h>

#define L 3
#define C 3

int main()
{
    int indice = 0;
    int matriz[L][C];
    int linha;
    printf("Insira os valores da matriz:\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%d valor:\n", indice + 1);
            scanf("%d", &matriz[i][j]);            
            indice++;
        }
    }
    printf("Insira o numero da linha que você deseja ver (de 1 a 3):\n");
    scanf("%i", &linha);
    linha = linha - 1;
    for(int j = 0; j < C; j++){
        printf("[%i]", matriz[linha][j]);
    }
}
