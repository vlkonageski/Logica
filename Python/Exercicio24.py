"""
Faça um algoritmo que carregue um vetor de 5 elementos inteiros
e em seguida armazene em um vetor apenas os números pares maiores
que 0. No final deve mostrar os elementos do vetor na tela.
"""

v = []
par = []

for n in range(1, 6):
    v.append(n)
    if n % 2 == 0:
        par.append(n)
for p in par:
    print(p)
