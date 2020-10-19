//Faca um algoritimo que converta metros para centimetros

#include<stdio.h>

int main(){
	
	int m, c;
	
	printf("Informe o valor em metros:");
	scanf("%d", &m);
	
	c = m * 100;
	
	printf("%d metros equivale a %d centimetros.", m, c);
}
