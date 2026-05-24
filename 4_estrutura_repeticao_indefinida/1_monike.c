#include <stdio.h>
#include <stdlib.h>

int main(){
    int primeiro, segundo;
    printf("Insira o primeiro número:\n");
    scanf("%i", &primeiro);
    printf("Insira o segundo número:\n");
    scanf("%i", &segundo);
    while(primeiro != segundo){
        if(primeiro > segundo){
            printf("Segundo e menor, incrementando +1 (%i)\n", segundo);
            segundo ++;
            }
        if(primeiro < segundo){
            printf("Primeiro e menor, incrementando +1 (%i)\n", segundo);
            primeiro ++;    
            }    
    }
    printf("Numeros sao iguais: %i", primeiro);
}