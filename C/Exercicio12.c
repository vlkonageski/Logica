/*
Elabore um algoritmo que leia as variaveis 'c' e 'n', respectivamente codigo
e numero de horas trabalhadas de um operario. Calcule o salario sabendo-se que
ele ganha R$ 10,00 por hora. Quando o numero de horas exceder a 50 calcule o
excesso de pagamento armazenando-o na variavel 'e'. Caso contrario zerar tal
variavel. A hora excedente de trabalho vale R$ 20,00. No final do processamento
imprimir o salario total e o salario excedente. 
*/

#include<stdio.h>

int main(){
	
	int c;
	float n, e, slr_total, slr_excedente;
	
	printf("Informe o codigo do funcionario: ");
	scanf("%d", &c);
	
	printf("Informe o numero de horas trabalhadas: ");
	scanf("%f", &n);
	
	if(n <= 50){
		slr_total = n * 10;
		slr_excedente = 0;
	}else{
		e = n - 50;
		slr_total = 50 * 10;
		slr_excedente = e * 20;
	}
	printf("O funcionario de codigo %d recebe um salario total de R$%.2f\n", c, slr_total);
	printf("O funcionario de codigo %d recebe um salario excedente de R$%.2f", c, slr_excedente);
}
