/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa
um algoritimo que calcule seu peso ideal, utilizando as seguintes formulas:
    Para homens: (72.7 * altura) - 58
    Para Mulheres: (62.1 * altura) - 44.7
*/

#include<stdio.h>

int main(){

    char sexo;
    float altura, peso_ideal;

    printf("Informe o sexo: ");
    scanf("%c", &sexo);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    if(sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
        printf("%.2f", peso_ideal);
    }
    else if(sexo == 'F'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("%.2f", peso_ideal);
    }else{
        printf("Sexo nao reconhecido!!!");
    }

}
