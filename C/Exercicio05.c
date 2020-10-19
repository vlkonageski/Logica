/*
Faca um algoritimo que pergunte quanto voce ganha por hora e o numero de horas trabalhadas no mes.
Calcule e mostre o total do seu salario no referido mes.
*/

#include<stdio.h>

int main(){
	
	int hora_trab, vlr_hora;
	
	printf("Informe quantas horas foram trabalhadas:");
	scanf("%d", &hora_trab);
	
	printf("Informe o valor da hora trabalhada:");
	scanf("%d", &vlr_hora);
	
	float salario = hora_trab * vlr_hora;
	
	printf("O seu salario e R$%.2f",salario);
}
