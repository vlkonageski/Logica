/*
Faca um algoritmo que conte de 1 a 100 e a cada multiplo de 10 emita
uma mensagem: "Multiplo de 10"
*/

#include<stdio.h>

int main(){
	
	int n = 0;
	
	while(n <= 100){
		n += 1;
		if(n % 10 == 0){
			printf("%d e multiplo de 10\n", n);
		}
	}
}
