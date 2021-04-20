//Faça um algoritimo que peça dois numeros e imprima a soma

package Java;

import java.util.Scanner;

public class Exercicio03{
	
	public static void main(String[] args) {
		
		System.out.println("Informe o primeiro numero:");
		int n1 = new Scanner(System.in).nextInt();
		System.out.println("Informe o segundo numero:");
		int n2 = new Scanner(System.in).nextInt();
		
		int soma = n1 + n2;
		
		System.out.println("A soma de " + n1 + " + " + n2 + " = " + soma);
	}
}