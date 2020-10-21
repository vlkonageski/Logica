/*
Desenvolva um gerador de tabuada, capaz de gerar a tabuada de
qualquer numero inteiro entre 1 a 10. O usuario deve informar
de qual numero ele deseja ver a tabuada. A saida deve ser conforme
o exemplo abaixo:

Tabuada de 5:
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50
*/

#include<stdio.h>

int main(){
	
	int x = 0, n, resultado;
	
	printf("Informe o numero que deseja ver a tabuada:");
	scanf("%d", &n);
	
	while(x < 10){
		x += 1;
		resultado = n * x;
		
		printf("%d X %d = %d\n", n, x, resultado);
		
	}
}
