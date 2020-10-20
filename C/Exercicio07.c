//Ler uma variavel numerica n e imprimi-la somente se for maior que 100, caso contrario imprimir com valor zero.

#include <stdio.h>

int main(){

    int n;

    printf("Informe um numero:");
    scanf("%d", &n);

    if(n > 100){
        printf("%d", n);
    }else{
        n = 0;
        printf("%d", n);
    }
}
