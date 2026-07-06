#include <stdio.h>
#include <stdlib.h>

int somar(int n){
    if(n == 0)
        return 0;
    return n + somar(n-1);
}

int main(){
    int soma = 0, n;
    printf("Insira um valor positivo:\n");
    scanf("%i", &n);
    soma = somar(n);
    printf("O resultado e: %i", soma);
}