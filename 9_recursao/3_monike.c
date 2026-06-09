#include <stdio.h>

int fatorial(int n);

int main(){
    int n, f;
    printf("N:\n");
    scanf("%d", &n);
    f = fatorial(n);
    printf("Fatorial: %d\n", f);
    return 0;
}
int fatorial(int n){
    int fatorial = 1;
    if(n <= 0)
        return 1;
    while(n > 0){
        fatorial = fatorial * n;
        n--;
    }
    return fatorial;
}