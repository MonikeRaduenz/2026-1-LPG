#include <stdio.h>
#include <stdlib.h>

int potencia(int x,int n){
    if(n == 0)
        return 1;
    return x * potencia(x, n - 1);
}

int main(){
    int x, n, resultado;
    printf("Insira um valor base:\n");
    scanf("%i", &x);
    printf("Insira um valor para potencia:\n");
    scanf("%i", &n);
    resultado = potencia(x,n);
    printf("O resultado e: %i", resultado);
}