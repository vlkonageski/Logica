/*
Faca um algoritmo que determine o maior em N numeros. A condicao de
parada e a entrada de um valor 0, ou seja, o algoritmo deve ficar
calculando o maior valor ate que a entrada seja igual a 0 (zero).
*/

#include<stdio.h>

int main(){
	
	int x, n;
	x = 1;
	n = 0;
	while(x != 0){
		printf("Informe um numero:");
		scanf("%d", &x);
		if(x > n){
			n = x;
		}
	}
	printf("O maior numero digitado foi %d", n);
}
