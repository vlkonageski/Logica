"""
Construa um algoritmo que leia 10 valores inteiros e positivos e:
a) Encontre o maior valor;
b) Encontre o menor valor
c) Calcule a média dos números lidos;
"""

x = 0
maior = 0
menor = 999
while x <= 10:
    n = int(input("Informe um numero positivo: "))
    x += 1
    if n > 0:
        if n > maior:
            maior = n
        if n < menor:
            menor = n 

print("O menor numero digitado foi {}".format(menor))
print("O maior numero digitado foi {}".format(maior))
