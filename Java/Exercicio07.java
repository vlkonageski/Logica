//Ler uma variavel numerica n e imprimi-la somente se for maior que 100, caso contrario imprimir com valor zero.

package Java;

import java.util.Scanner;

public class Exercicio07{
	public static void main(String[] args) {
		
		System.out.println("Informe um numero:");
		int n = new Scanner(System.in).nextInt();
		
		if(n > 100) {
			System.out.println("O numero digitado foi: " + n);
		}
		else {
			System.out.println(0);
		}
	}
}