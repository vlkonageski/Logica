"""
Faça um algoritmo que leia um número inteiro e mostre uma mensagem
indicando se este número é par ou ímpar, e se é positivo ou negativo.
"""

n = int(input("Informe um numero: "))

if n % 2 == 0 and n >= 0:
    print("{} é par e positivo".format(n))
elif n % 2 == 0 and n < 0:
    print("{} é par e negativo".format(n))
elif n % 2 != 0 and n >= 0:
    print("{} é impar e positivo".format(n))
else:
    print("{} é impar e negativo".format(n))
