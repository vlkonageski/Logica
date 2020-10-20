/*
Elabore um algoritmo que dada a idade de um nadador, classifique-o
em uma das seguintes categorias:
infantil-a = 5 a 7 anos
infantil-b = 8 a 11 anos
juvenil-a = 12 a 13 anos
juvenil-b = 14 e 17 anos
adultos = maior de 18 anos
*/

#include<stdio.h>

int main(){
	
	int idade;
	
	printf("Informe a idade do nadador:");
	scanf("%d", &idade);
	
	if(idade >= 5 && idade <= 7){
		printf("infantil-a");
	}else if(idade >= 8 && idade <= 11){
		printf("infantil-b");
	}else if(idade >= 12 && idade <= 13){
		printf("juvenil-a");
	}else if(idade >= 14 && idade <= 17){
		printf("juvenil-b");
	}else if(idade > 18){
		printf("adultos");
	}else{
		printf("Nao se enquadra em nenhum grupo!");
	}
}
