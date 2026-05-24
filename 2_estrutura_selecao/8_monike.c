#include <stdio.h>
#include <stdlib.h>

int main (){
    int ano, bissexto;
    printf("Insira o ano (formato yyyy):\n");
    scanf("%i", &ano);
    bissexto = ano%400;
    if (ano >= 0){
        if (bissexto == 0){
            printf("E um ano bissexto!");
    }
        else {
            printf("Não e um ano bissexto!");
        }    
    }
    else {
        printf("Formato de data incorreto!");
    }
}    
