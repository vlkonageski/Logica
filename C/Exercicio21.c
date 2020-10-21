/*
Faca um programa que leia um nome de usuario e a sua senha e nao
aceite a senha igual ao nome de usuario, mostrando uma mensagem
de erro e voltando a pedir as informacoes.
*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char nome[50], senha[50];
	
	printf("Informe seu nome:");
	gets(nome);
	
	printf("Informe sua senha:");
	gets(senha);
	
	if(!strcmp(nome, senha)){
		
		printf("Nome e senha nao podem ser iguais!!!\n");
		
		printf("Informe seu nome:");
		gets(nome);
	
		printf("Informe sua senha:");
		gets(senha);
	}else{
		printf("Usuario e senha cadastrados com sucesso!!!");
	}
	
}
