#include <stdlib.h>
#include <stdio.h>

int main(){
    float fahrenheit, celsius;
    printf("Insira a temperatura em Fahrenheit:\n");
    scanf("%f", &fahrenheit);
    celsius = (5*(fahrenheit-32))/9;
    printf("%.2f F equivalem a %.2f C", fahrenheit, celsius);
}