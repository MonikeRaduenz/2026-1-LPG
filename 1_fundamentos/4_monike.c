#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade, peso;
    char tipo;
    printf("Insira a idade do seu pet:\n");
    scanf("%i", &idade);
    printf("Insira o peso do seu pet:\n");
    scanf("%i", &peso);   
    printf("Insira o tipo de pet(c para cachorro e g para gato):\n");
    scanf(" %c", &tipo);   
    if(tipo == 'c'){
        printf("Tipo: cachorro\nIdade: %i\nPeso: %i\n", idade, peso);
    } else {
        printf("Tipo: gato\nIdade: %i\nPeso: %i\n", idade, peso);
    }
}