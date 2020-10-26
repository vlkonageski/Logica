/*
Sua organizacao acaba de contratar um estagiario para trabalhar no suporte de informatica, com a intencao de fazer um levantamento
nas sucatas encontradas na area. A primeira tarefa dele e testar todos os cerca de 200 mouses que se encontram la, testando e anotando o
estado de cada um deles, para verificar o que pode aproveitar deles. Foi requisitado que voce desenvolva um programa para registar este 
levantamento. O programa devera receber um numero indeterminado de entradas, cada uma contendo: um numero de identificacao do
mouse e o tipo de defeito:
- necessita da esfera;
- necessita de limpeza;
- necessita troca do cabo ou conector;
- quebrado ou inutilizado;

Uma identificacao igual a zero encerra o programa. Ao final o programa devera emitir o seguinte relatorio:

Quantidade de mouses: 100

Situacao                              Quantidade               Percentual
1-necessita da esfera                    40                        40%
2-necessita de limpeza                   30                        30%
3-necessita troca do cabo ou conector    15                        15%
4-quebrado ou inutilizado                15                        15%
*/

#include<stdio.h>

int main(){
	
	int id, opcao, def1 = 0, def2 = 0, def3 = 0, def4 =0, total_mouse = 0;
	
	printf("Informe a identificacao do mouse: ");
	scanf("%d", &id);
	
	while(id != 0){
		printf("1-Necessita da esfera\n");
		printf("2-Necessita de Limpeza\n");
		printf("3-Necessita troca do cabo ou conector\n");
		printf("4-Quebrado ou Inutilizado\n");
		printf("0-Sair\n");
		printf("Informe a opcao desejada:");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			def1 = def1 + 1;
			total_mouse += 1;
		}else if(opcao == 2){
			def2 = def2 + 1;
			total_mouse += 1;
		}else if(opcao == 3){
			def3 = def3 + 1;
			total_mouse += 1;
		}else if(opcao == 4){
			def4 = def4 + 1;
			total_mouse += 1;
		}else{
			printf("Codigo Invalido!\n");
		}
		printf("Informe a identificacao do mouse: \n");
		scanf("%d", &id);
	}
	
	float perc1, perc2, perc3, perc4;
	
	perc1 = ((float)def1 / (float)total_mouse * 100);
	perc2 = ((float)def2 / (float)total_mouse * 100);
	perc3 = ((float)def3 / (float)total_mouse * 100);
	perc4 = ((float)def4 / (float)total_mouse * 100); 
	
	printf("Situacao                               Quantidade                Percentual\n");
	printf("1-necessita da esfera                     %d                        %.2f\n",def1, perc1);
	printf("2-Necessita de Limpeza                    %d                        %.2f\n",def2, perc2);
	printf("3-Necessita troca do cabo ou conector     %d                        %.2f\n",def3, perc3);
	printf("4-quebrado ou inutilizado                 %d                        %.2f\n",def4, perc4);
}
