/*
Elabore um algoritmo que leia as variáveis 'c' e 'n', respectivamente código
e número de horas trabalhadas de um operário. Calcule o salário sabendo-se que
ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o
excesso de pagamento armazenando-o na variável 'e'. Caso contrário zerar tal
variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento
imprimir o salário total e o salário excedente. 
*/

package Java;

import java.util.Scanner;

public class Exercicio12{
	
	public static void main(String[] args) {
		
		System.out.println("Informe o codigo do funcionario: ");
		int c = new Scanner(System.in).nextInt();
		
		System.out.println("Informe o numero de horas trabalhadas: ");
		int n = new Scanner(System.in).nextInt();
		
		if(n > 50) {
			int e = n - 50;
			System.out.println("Salario total R$ " + n * 10);
			System.out.println("Salario excedente R$ " + e * 20);
		}
		else {
			int e = 0;
			System.out.println("Salario total R$ " + n * 10);
			System.out.println("Salario excedente R$ " + e);
		}
	}
}