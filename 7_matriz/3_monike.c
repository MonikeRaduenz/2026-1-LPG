#include <stdlib.h>
#include <stdio.h>

#define L 4
#define C 4

int main()
{
    int indice = 0;
    int matriz[L][C];
    int soma = 0;
    printf("Insira os valores da matriz:\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%d valor:\n", indice + 1);
            scanf("%d", &matriz[i][j]);            
            indice++;
        }
    }
    for(int i = 0; i< L;i++){
        for(int j = 0; j < C; j++){
            printf(" [%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    // soma linhas pares
    for(int i = 0; i< L;i++){
        for(int j = 0; j < C; j++){
            if(i % 2 == 0 && i != 0){
                soma += matriz[i][j];
            }
        }
    }    
    printf("Soma: %i \n", soma);  

    // primeiro e ultimo
    printf("Primeiro elemento: %d \n", matriz[0][0]);
    printf("Ultimo elemento: %d \n", matriz[3][3]);

    //somar linha 2
    const int LINHA = 2;
    int somatoria_linha = 0;
    for(int j = 0; j < C; j++){
        somatoria_linha += matriz[LINHA][j];
    }
    printf("Somatoria: %d\n", somatoria_linha);

    //mostrar diagonal
    for(int i = 0; i< L;i++){
        for(int j = 0; j < C; j++){
            if(i == j){
                printf(" [ %d ] ", matriz[i][j]);
            }else{
                printf(" [   ] ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    //mostrar maior valor
    //mostrar menor valor
    int maior = -9999999;
    int menor = 9999999;

    for(int i = 0; i< L;i++){
        for(int j = 0; j < C; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("Maior: %d - Menor: %d \n", maior, menor);
}
