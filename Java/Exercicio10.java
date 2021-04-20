/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa
um algoritimo que calcule seu peso ideal, utilizando as seguintes formulas:
    Para homens: (72.7 * altura) - 58
    Para Mulheres: (62.1 * altura) - 44.7
*/

package Java;

import java.util.Scanner;

public class Exercicio10 {

	public static void main(String[] args) {
		
		System.out.println("Informe sua altura: ");
		float altura = new Scanner(System.in).nextFloat();
		
		System.out.println("Informe o sexo F para feminino e M para masculino:");
		String sexo = new Scanner(System.in).nextLine();
		
		if(sexo == "M" || sexo == "m") {
			double pesoIdeal = (72.7 * altura) - 58;
			System.out.println("Seu peso ideal e: " + String.format("%.2f", pesoIdeal));
		}
		else if(sexo == "F" || sexo == "f") {
			double pesoIdeal = (62.1 * altura) - 44.7;
			System.out.println("Seu peso ideal e: " + String.format("%.2f", pesoIdeal));
		}
		
	}
}