"""
Faça um programa que carregue um vetor com dez números inteiros.
Calcule e mostre os números superiores a 50 e suas respectivas
posições. Mostrar mensagem se não existir nenhum número nesta
condição.
"""

v = []
maior = False

for n in range(1, 11):
    x = int(input("Informe um numero:"))
    v.append(x)

for n in v:
    if n > 50:
        print("{} esta na posição {}".format(n, v.index(n)))
        maior = True
if maior == False:
    print("Não existe numero maior que 50!!!")

print(v)

