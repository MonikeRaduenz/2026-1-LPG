#include <stdlib.h>
#include <stdio.h>

#define SOMAR 1
#define SUBTRAIR 2
#define MULTIPLICAR 3
#define DIVIDIR 4
#define SAIR 5

int main() {
    float primeiro, segundo, resultado;
    int operacao;
    do {
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Numero da operacao:\n");
        scanf("%d", &operacao);
        if (operacao == SAIR) {
            printf("Encerrando...\n");
            break;
        }

        printf("Digite dois numeros:\n");
        scanf("%f %f", &primeiro, &segundo);

        switch (operacao) {
            case SOMAR:
                resultado = primeiro + segundo;
                break;
            case SUBTRAIR:
                resultado = primeiro - segundo;
                break;
            case MULTIPLICAR:
                resultado = primeiro * segundo;
                break;
            case DIVIDIR:
                if (segundo != 0) {
                    resultado = primeiro / segundo;
                } else {
                    printf("Erro! Divisao por zero.\n");
                    continue;
                }
                break;
            default:
                printf("Opcao invalida\n");
                continue;
        }
        printf("Resultado: %.2f\n", resultado);
    } while (operacao != SAIR);

    return 0;
}