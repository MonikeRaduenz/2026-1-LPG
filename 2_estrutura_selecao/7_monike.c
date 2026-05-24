#include <stdio.h>
#include <stdlib.h>

int main (){
    int valorx, valory, valorz;
    printf("Insira o valor de x:\n");
    scanf("%i", &valorx);
    printf("Insira o valor de y:\n");
    scanf("%i", &valory);
    printf("Insira o valor de z:\n");
    scanf("%i", &valorz);
    if (valorx > 0  && valory > 0 && valorz > 0){
        if (valorx == valory && valory == valorz){
            printf("E um triangulo equilatero!");
        }
        else if (valorx == valory | valorx == valorz | valory == valorz)
        {
            printf("E um triangulo Isoceles!");
        }
        else {
            printf("E um triangulo escaleno!");
        }
    }
    else {
        printf("Nao e um triangulo");
    }
}    
