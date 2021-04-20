/*
João da Silva, pescador, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do
estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
João precisa que você faça um algoritmo que leia a variável 'p' (peso de peixes) e verifique se há excesso.
Se houver, gravar na variável 'e' (excesso) e na variável 'm' o valor da multa que João deverá pagar.
Caso contrário mostrar tais variáveis com o conteúdo 'zero'.
*/

package Java;

import java.util.Scanner;

public class Exercicio11{
	
	public static void main(String[] args) {
		
		System.out.println("Informe o peso total dos peixes: ");
		float p = new Scanner(System.in).nextFloat();
		
		if(p > 50) {
			float e = p - 50;
			float m = e * 4;
			
			System.out.println("O peso dos peixes foi: " + String.format("%.2f", p) + " Kg");
			System.out.println("O peso excedido foi: " + String.format("%.2f", e) + " Kg");
			System.out.println("O valor da multa e de R$ " + String.format("%.2f", m));			
		}
		else {
			System.out.println("O peso dos peixes foi: " + String.format("%.2f", p) + " Kg");
			System.out.println("O peso excedido foi: " + 0);
			System.out.println("O valor da multa e de R$ " + 0);	
		}
		
	}
}