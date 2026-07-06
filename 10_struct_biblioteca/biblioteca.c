#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void funcao_inserir(struct Aluno vetor[], int n){
    for(int i = 0; i < n; i++){
        printf("Insira os valores do %i aluno\n", i + 1);
        printf("Nome:\n");
        scanf("%s", vetor[i].nome);
        printf("Altura:\n");
        scanf("%f", &vetor[i].altura);
        printf("Idade:\n");
        scanf("%i", &vetor[i].idade);
        printf("Notas1:\n");
        scanf("%i", &vetor[i].notas.notas1);
        printf("Notas2:\n");
        scanf("%i", &vetor[i].notas.notas2);
    }
}

void funcao_mostrar(struct Aluno vetor[], int n){
    printf("--- Informações: ---\n");
    for (int i = 0; i < n; i++){
        printf("Aluno %i\n", i + 1);
        printf("Nome: %s\n", vetor[i].nome);
        printf("Altura: %.2f\n", vetor[i].altura);
        printf("Idade: %d\n", vetor[i].idade);
        printf("Nota 1: %d\n", vetor[i].notas.notas1);
        printf("Nota 2: %d\n", vetor[i].notas.notas2);
    }
}