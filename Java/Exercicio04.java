//Faça um algoritimo que converta metros para centimetros

package Java;

import java.util.Scanner;

public class Exercicio04{
	
	public static void main(String[] args) {
		
		System.out.println("Informe o tamanho em metros:");
		int metros = new Scanner(System.in).nextInt();
		
		int centimetros = metros * 100;
		
		System.out.println(metros + " e igual a: " + centimetros + " centimetros");
	}
}