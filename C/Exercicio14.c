/*
Faca um algoritmo que leia um numero inteiro e mostre uma mensagem
indicando se este numero e par ou impar, e se e positivo ou negativo.
*/

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &n);
	
	if(n >= 0){
		if(n % 2 == 0){
			printf("%d e positivo e par!", n);
		}else{
			printf("%d e positivo e impar!", n);
		}
	}else{
		if(n % 2 == 0){
			printf("%d e negativo e par!", n);
		}else{
			printf("%d e negativo e impar!", n);
		}
	}
}
