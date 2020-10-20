/*
Ler um numero e verificar se ele é par ou impar. Quando for par armazenar esse valor em 'p'
e quando for impar armazenar em 'i'.
Exibir 'p' e 'i' no final do processamento.
*/

#include<stdio.h>

int main(){

    int n, p, i;

    printf("Informe um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        p = n;
        printf("%d e par!", p);
    }else{
        i = n;
        printf("%d e impar!", i);
    }
}
