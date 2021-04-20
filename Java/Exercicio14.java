/*
Faça um algoritmo que leia um número inteiro e mostre uma mensagem
indicando se este número é par ou ímpar, e se é positivo ou negativo.
*/

package Java;

import java.util.Scanner;

public class Exercicio14{
	
	public static void main(String[] args) {
		
		System.out.println("Informe um numero: ");
		int n = new Scanner(System.in).nextInt();
		
		if(n >= 0) {
			if(n % 2 == 0) {
				System.out.println(n + " e positivo e par!");
			}
			else {
				System.out.println(n + " e positivo e impar!");
			}
		}
		else {
			if(n % 2 == 0) {
				System.out.println(n + " e negativo e par!");
			}
			else {
				System.out.println(n + " e negativo e impar!");
			}
		}
	}
}