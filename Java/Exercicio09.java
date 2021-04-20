/*
Ler um numero e verificar se ele é par ou impar. Quando for par armazenar esse valor em 'p'
e quando for impar armazenar em 'i'.
Exibir 'p' e 'i' no final do processamento.
*/

package Java;

import java.util.Scanner;

public class Exercicio09{
	
	public static void main(String[] args) {
		
		System.out.println("Informe um numero: ");
		int n = new Scanner(System.in).nextInt();
		
		if(n % 2 == 0) {
			int p = n;
			System.out.println("O numero e par: " + p);
		}
		else {
			int i = n;
			System.out.println("O numero e impar: " + i);
		}
	}
}