#include <stdlib.h>
#include <stdio.h>

int main(){
    float valor_investido, valor_final, anos;
    printf("Insira o valor investido:\n");
    scanf("%f", &valor_investido);
    printf("Insira quantos anos ficara investido:\n");
    scanf("%f", &anos);    
    valor_final = valor_investido + valor_investido*0.05*anos;
    printf("Valor total: %.2f", valor_final);
}