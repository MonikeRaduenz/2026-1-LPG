#include <stdio.h>
#include <stdlib.h>

int main (){
    int quantidade;
    float preco_total;
    printf("Insira a quantidade de macas:\n");
    scanf("%i", &quantidade);
    if (quantidade >= 12){
        preco_total = 1.95 * quantidade;
        printf("Valor total da compra: %.2f \n", preco_total);
    }
    else {
        preco_total = 2.30 * quantidade;
        printf("Valor total da compra: %.2f\n", preco_total);
    }
}