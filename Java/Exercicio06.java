/*
Tendo como dados de entrada a altura de uma pessoa, construa um algoritimo
que calcule seu peso ideal, usando a seguinte formula:
    (72,7 * altura) - 58
*/

package Java;

import java.util.Scanner;

public class Exercicio06{
	
	public static void main(String[] args) {
		
		System.out.println("Informe a sua altura:");
		float altura = new Scanner(System.in).nextFloat();
		
		double pesoIdeal = (72.7 * altura) - 58;
		
		System.out.println("Seu peso ideal e: " + String.format("%.2f", pesoIdeal));
	}
}