//Faça um algoritimo para somar dois numeros e multiplicar o resultado pelo primeiro numero

#include<stdio.h>

int main(){
    int n1, n2, soma, multiplicar;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    multiplicar = soma * n1;
    
    printf("A soma de %d + %d = %d\n", n1, n2, soma);
	printf("A multiplicacao de %d + %d = %d", soma, n1, multiplicar);    
}
