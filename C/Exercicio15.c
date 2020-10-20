/*
A Secretaria de Meio Ambiente que controla o indice de poluicao, mantem 3 grupos de industrias que sao
altamente poluentes do meio ambiente. O indice de poluicao aceitavel varia de 0,05 ate 0,25. 
#grupo1
Se o indice sobe para 0,3 as industrias do 1 grupo sao intimadas a suspenderem suas atividades. 
#grupo 2
Se o indice crescer para 0,4 as indutrias do 1 e 2 grupos sao intimadas a suspenderem
suas atividades. 
#grupo 3
Se o indice atingir 0,5 todos os grupos devem ser notificados
para paralisarem suas atividades. 
Faca um algoritmo que leia o indice de poluicao
medido e emita a notificacao adequada aos diferentes grupos de empresas.
*/

#include<stdio.h>

int main(){
	
	float indice;
	
	printf("Informe o indice de poluicao:");
	scanf("%f", &indice);
	
	if(indice >= 0.05 && indice <= 0.25){
		printf("Nenhuma empresa precisa suspender suas atividades!");
	}else if(indice > 0.25 && indice <= 0.3){
		printf("Empresas do grupo 1 devem suspender suas atividades!");
	}else if(indice > 0.3 && indice <= 0.4){
		printf("Empresas do grupo 1 e 2 devem suspender suas atividades!");
	}else{
		printf("Todas as empresas devem suspender suas atividades!");
	}
}
