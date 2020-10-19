/*
Tendo como dados de entrada a altura de uma pessoa, construa um algoritimo
que calcule seu peso ideal, usando a seguinte formula:
    (72,7 * altura) - 58
*/

#include<stdio.h>

int main(){
	
	float altura, peso_ideal;
	
	printf("Informe sua altura:");
	scanf("%f", &altura);
	
	peso_ideal = (72.7 * altura) - 58;
	
	printf("Seu peso ideal e: %.2f", peso_ideal);
}
