//Elabore um programa que gera e escreve os numeros impares dos numeros entre 100 e 200

#include<stdio.h>

int main(){
	
	int n = 99;
	
	while(n < 200){
		n += 1;
		
		if(n % 2 != 0){
			printf("%d e impar!\n", n);
		}
	}
}
