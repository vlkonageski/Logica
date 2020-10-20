/*
Desenvolva um algoritmo que:
a) leia 4 (quatro) numeros;
b) Calcule o quadrado de cada um;
c) Se o valor resultante do quadrado do terceiro for >= 1000, imprima-o e finalize;
d) Caso contrario, imprima os valores lidos e seus respectivos quadrados;
*/

#include<stdio.h>

int main(){
	
	int n1, n2, n3, n4, qd_n1, qd_n2, qd_n3, qd_n4;
	
	printf("Informe o primeiro numero:");
	scanf("%d", &n1);
	
	printf("Informe o segundo numero:");
	scanf("%d", &n2);
	
	printf("Informe o terceiro numero:");
	scanf("%d", &n3);
	
	printf("Informe o quarto numero:");
	scanf("%d", &n4);
	
	qd_n1 = n1 * n1;
	qd_n2 = n2 * n2;
	qd_n3 = n3 * n3;
	qd_n4 = n4 * n4;
	
	if(qd_n3 >= 1000){
		printf("O terceiro numero informado foi %d e seu quadrado e %d.\n", n3, qd_n3);
	}else{
		printf("O primeiro numero informado foi %d e seu quadrado e %d.\n", n1, qd_n1);
		printf("O segundo numero informado foi %d e seu quadrado e %d.\n", n2, qd_n2);
		printf("O terceiro numero informado foi %d e seu quadrado e %d.\n", n3, qd_n3);
		printf("O quarto numero informado foi %d e seu quadrado e %d.", n4, qd_n4);
	}
}
