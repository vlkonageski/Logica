/*
Elabore um algoritimo que leia um numero. Se positivo armazene-o em 'a', se for negativo armazene-o em 'b'.
No final mostrar o resultado.
*/

package Java;

import java.util.Scanner;

public class Exercicio08{
	
	public static void main(String[] args) {
		
		System.out.println("Informe um numero: ");
		int n = new Scanner(System.in).nextInt();
		
		if(n >= 0) {
			int a = n;
			System.out.println("O valor e positivo: " + a);
		}
		else {
			int b = n;
			System.out.println("O valor e negativo: " + b);
		}
	}
}