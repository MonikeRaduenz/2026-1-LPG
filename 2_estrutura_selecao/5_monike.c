#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade;
    printf("Insira sua idade:\n");
    scanf("%i", &idade);
    if (idade < 18){
        printf("Nao eleitor! \n");
    }
    if (idade >= 18 && idade < 65){
        printf("Eleitor obrigatorio! \n");
    }
    if (idade >= 65) {
        printf("Eleitor facultativo\n");
    }
}    