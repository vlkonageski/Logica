/*Faça um algoritimo para somar dois numeros e multiplicar o resultado pelo primeiro numero */

package Java;

import java.util.Scanner;

public class Exercicio01{
    public static void main(String[] args) {
        int n1 = new Scanner(System.in).nextInt();
        int n2 = new Scanner(System.in).nextInt();
        int soma = n1 + n2;
        int multiplicar = soma * n1;

        System.out.println("A soma de "+n1+" + "+n2+" = "+soma);
        System.out.println("A multiplicação de "+soma+" * "+n1+" = "+multiplicar);
    }
}