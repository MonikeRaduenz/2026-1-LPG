#include <stdlib.h>
#include <stdio.h>

int main(){
    int primeiro, segundo, soma, subtracao, multiplicacao, potencia = 1;
    float divisao, resto;
    printf("Insira o primeiro numero:\n");
    scanf("%i", &primeiro);
    printf("Insira o segundo numero:\n");
    scanf("%i", &segundo);
    soma = primeiro + segundo;
    subtracao = primeiro - segundo;
    multiplicacao = primeiro * segundo;
    divisao = primeiro/segundo;
    int expoente = segundo;
    while(expoente > 0){
        potencia = potencia * primeiro;
        expoente--;
    }
    resto = primeiro % segundo;
    printf("Soma: %i\n", soma);
    printf("Subtracao: %i\n", subtracao);
    printf("Multiplicacao: %i\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);
    printf("Potencia: %i\n", potencia);
    printf("Resto: %.2f\n", resto);
}