/*
Faça um programa que calcule o estoque medio de uma peça, sendo que:
    estoque medio = quantidade minima + quantidade maxima  / 2
*/

#include<stdio.h>

int main(){
	int qtd_minima, qtd_maxima, estq_medio;
	
	printf("Informe a quantidade minima da peca: ");
	scanf("%d", &qtd_minima);
	
	printf("Informe a quantidade maxima da peca: ");
	scanf("%d", &qtd_maxima);
	
	estq_medio = (qtd_minima + qtd_maxima) / 2;
	
	printf("O estoque medio da peca e %d", estq_medio);
	
}
