"""
Escreva um algoritmo que leia e mostre um vetor de 20 elementos
inteiros, em seguida, mostre a soma de todos os elementos.
"""

v1 = []
soma = 0
for n in range(1, 21):
    x = int(input("Informe um numero: "))
    v1.append(x)
    soma += x

print(v1)
print(soma)

