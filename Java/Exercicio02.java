/*
Faça um programa que calcule o estoque medio de uma peça, sendo que:
    estoque medio = quantidade minima + quantidade maxima  / 2
*/
package Java;
import java.util.Scanner;


public class Exercicio02{
    public static void main(String[] args) {
    	System.out.println("Informe o estoque minimo:");
        int estqMin = new Scanner(System.in).nextInt();
        System.out.println("Informe o estoque maximo:");
        int estqMax = new Scanner(System.in).nextInt();
        int estqMedio = (estqMin + estqMax) / 2;

        System.out.println("O estoque medio e: " + estqMedio);
    }
}