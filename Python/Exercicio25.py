"""
Escreva um algoritmo que leia dois vetores de 10 posições e faça a 
soma dos elementos de mesmo índice, colocando o resultado em um terceiro
vetor. Mostre o vetor resultante.
"""

v1 = []
v2 = []
soma = []

for n in range(1, 11):
    n1 = int(input("Informe o valor para o primeiro vetor:"))
    v1.append(n1)
    n2 = int(input("Informe o valor para o segundo vetor:"))
    v2.append(n2)
    soma.append(n1 + n2)
for n in soma:
    print(n)
