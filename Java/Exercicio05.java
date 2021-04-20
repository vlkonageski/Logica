/*
Faça um algoritimo que pergunte quanto voce ganha por hora e o numero de horas trabalhadas no mes.
Calcule e mostre o total do seu salario no referido mes.
*/

package Java;

import java.util.Scanner;

public class Exercicio05{
	
	public static void main(String[] args) {
		
		System.out.println("Quanto voce ganha por hora:");
		float valorHora = new Scanner(System.in).nextFloat();
		
		System.out.println("Quantas horas voce trabalhou no mes:");
		int horasTrabalhadas = new Scanner(System.in).nextInt();
		
		float salario = horasTrabalhadas * valorHora;
		
		System.out.println("O seu salario sera de R$ " + String.format("%.2f", salario));
	}
}