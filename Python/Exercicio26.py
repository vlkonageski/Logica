"""
Faça um programa que carregue um vetor com dez números inteiros. 
Mostre o vetor na ordem inversa a que foi digitado.
"""

v1 = []
v2 = []

for n in range(1, 11):
    n1 = int(input("Informe um valor:"))
    v1.append(n1)

print(v1)
v1.reverse()
v2 = v1
print(v2)
