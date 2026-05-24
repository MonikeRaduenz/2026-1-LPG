#include <stdlib.h>
#include <stdio.h>

int main(){
    float cambio, dolar, real;
    printf("Insira o valor de cambio do dolar:\n");
    scanf("%f", &cambio);
    printf("Insira o valor de dolares:\n");
    scanf("%f", &dolar);
    real = dolar * cambio;
    printf("Valor em reais: %.2f", real);
}