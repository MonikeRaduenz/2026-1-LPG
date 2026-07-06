#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){
    int n;
    printf("Insira a quantidade de alunos para incluir:\n");
    scanf("%d", &n);
    struct Aluno alunos[n];    
    funcao_inserir(alunos, n);
    funcao_mostrar(alunos, n);
    return 0;    
}