#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int total_par = 0, total_impar = 0;
    for(int i = 0; i <= 9; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            total_par ++;
        }
        else {
            total_impar ++;   
        } 
    }
    printf("%d numero sao par e %d sao impar\n", total_par, total_impar);
    return 0;
}