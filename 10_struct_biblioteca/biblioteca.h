#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

struct Notas
{
    int notas1;
    int notas2;
};

struct Aluno
{
    char nome[30];
    float altura;
    int idade;
    struct Notas notas;
};

void funcao_inserir(struct Aluno vetor[], int n);
void funcao_mostrar(struct Aluno vetor[], int n);

#endif