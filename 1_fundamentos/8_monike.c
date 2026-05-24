#include <stdlib.h>
#include <stdio.h>

int main(){
    float raio, altura, volume, pi;
    pi = 3.14;
    printf("Insira o raio da lata:\n");
    scanf("%f", &raio);
    printf("Insira a altura da lata:\n");
    scanf("%f", &altura);
    volume = pi*raio*raio*altura;
    printf("O volume da lata e %.2f", volume);
}