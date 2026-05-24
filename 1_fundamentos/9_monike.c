#include <stdlib.h>
#include <stdio.h>

int main(){
    float valor_compra, com20, com30, valor_venda;
    printf("Insira o valor de compra do produto:\n");
    scanf("%f", &valor_compra);
    com20 = valor_compra * 0.2;
    com30 = valor_compra * 0.3;
    valor_venda = valor_compra + com20 +com30;
    printf("Valor de compra do produto: %.2f \n", valor_compra);
    printf("Vinte por cento em cima do produto: %.2f \n", com20);
    printf("Trinta por cento em cima do produto: %.2f \n", com30);
    printf("Valor de venda do produto: %.2f \n", valor_venda);
}