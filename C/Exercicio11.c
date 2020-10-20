/*
Joao da Silva, pescador, comprou um microcomputador para controlar o rendimento diario de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do
estado de Sao Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
Joao precisa que voce faca um algoritmo que leia a variavel 'p' (peso de peixes) e verifique se haa excesso.
Se houver, gravar na variavel 'e' (excesso) e na variável 'm' o valor da multa que João devera pagar.
Caso contrario mostrar tais variaveis com o conteudo 'zero'.
*/

#include<stdio.h>

int main(){
	
	float p, e, m;
	
	printf("Informe o peso dos peixes:");
	scanf("%f", &p);
	
	if(p > 50){
		e = p - 50;
		m = e * 4;
		printf("O valor a ser pago da multa e de R$%.2f", m);
	}else{
		printf("0");
	}
}
