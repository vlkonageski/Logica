/*
Elabore um algoritimo que leia um numero. Se positivo armazene-o em 'a', se for negativo armazene-o em 'b'.
No final mostrar o resultado.
*/

#include<stdio.h>

int main(){

    int n, a, b;

    printf("Informe um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        a = n;
        printf("%d e par!", a);
    }else{
        b = n;
        printf("%d e impar!", b);
    }

}
