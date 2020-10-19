//Faca um algoritimo que peca dois numeros e imprima a soma

#include<stdio.h>

int main(){
	
	int n1, n2, soma;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma de %d + %d = %d", n1, n2, soma);
}
