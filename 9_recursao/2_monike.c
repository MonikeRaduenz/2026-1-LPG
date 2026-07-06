#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 0)
        return 1;
    return n * fatorial(n-1);
}

int main(){
    int n, resultado;
    printf("Insira um valor positivo:\n");
    scanf("%i", &n);
    resultado = fatorial(n);
    printf("O resultado e: %i", resultado);
}