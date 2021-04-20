/*
Desenvolva um algoritmo que:
a) leia 4 (quatro) números;
b) Calcule o quadrado de cada um;
c) Se o valor resultante do quadrado do terceiro for >= 1000, imprima-o e finalize;
d) Caso contraŕio, imprima os valores lidos e seus respectivos quadrados;
*/

package Java;

import java.util.Scanner;

public class Exercicio13{
	
	public static void main(String[] args) {
		
		System.out.println("Informe um numero:");
		int n1 = new Scanner(System.in).nextInt();
		System.out.println("Informe um numero:");
		int n2 = new Scanner(System.in).nextInt();
		System.out.println("Informe um numero:");
		int n3 = new Scanner(System.in).nextInt();
		System.out.println("Informe um numero:");
		int n4 = new Scanner(System.in).nextInt();
		
		int qdn1 = n1 * n1;
		int qdn2 = n2 * n2;
		int qdn3 = n3 * n3;
		int qdn4 = n4 * n4;
		
		if (qdn3 >= 1000) {
			System.out.println("O quadrado de " + n3 + " = " + qdn3);
		}
		else {
			System.out.println("O quadrado de " + n1 + " = " + qdn1);
			System.out.println("O quadrado de " + n2 + " = " + qdn2);
			System.out.println("O quadrado de " + n3 + " = " + qdn3);
			System.out.println("O quadrado de " + n4 + " = " + qdn4);
		}
		
	}
}