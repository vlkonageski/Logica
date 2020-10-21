/*
Construa um algoritmo que leia 10 valores inteiros e positivos e:
a) Encontre o maior valor;
b) Encontre o menor valor
c) Calcule a media dos numeros lidos;
*/

#include<stdio.h>

int main(){
	
	int n = 0, maior = 0, menor = 999, x, media, soma = 0;
	
	
	while(n < 10){
		printf("Informe um numero:");
		scanf("%d", &x);
		n += 1;
		soma += x;
		if(x > maior){
			maior = x;
		}
		if(x < menor){
			menor = x;
		}
	}
	media = soma / 10;
	printf("O maior numero digitado foi %d\n", maior);
	printf("O menor numero digitado foi %d\n", menor);
	printf("A media dos numeros e %d", media);
}
