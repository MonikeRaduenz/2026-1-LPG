#include <stdio.h>
#include <stdlib.h>

// Vou utilizar como exemplo uma frutaria

struct frutaria
{
    char nome[20];
    int quantidade;
    float preco;
};

int main(){
    FILE *file;
    struct frutaria registros;
    file = fopen("arquivo.txt", "w");
    if(file){
        printf("Insira o nome da fruta:\n");
        scanf("%s", registros.nome);
        printf("Insira a quantidade de frutas:\n");
        scanf("%d", &registros.quantidade);
        printf("Insira o preco da fruta:\n");
        scanf("%f", &registros.preco);
        fprintf(file, "Nome: %s\nQuantidade: %d\nPreco: %.2f\n",
                registros.nome, registros.quantidade, registros.preco);
        fclose(file);
        printf("Dados gravados com sucesso!\n");
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}