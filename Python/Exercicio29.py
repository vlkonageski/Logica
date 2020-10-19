"""
Faça um programa que receba um código numérico e um vetor de cinco posições de
números reais. Se o código for 0 (zero), termine o programa. Se o código for 1,
mostre o vetor na ordem direta. Se o código for 2, mostre o vetor na ordem inversa.
"""

v = []
y = 1

for n in range(1, 6):
    x = int(input("Informe um numero:"))
    v.append(x)

while y != 0:
    y = int(input("1- Mostrar vetor na ordem direta\n"
        +"2- Mostrar vetor na ordem inversa\n"
        +"0- Finalizar programa\n"
        +"Insira um codigo: "))
    
    if y == 1:
        print("----Ordem Direta----")
        print(v)
    elif y == 2:
        v.reverse()
        print("----Ordem Inversa----")
        print(v)
    elif y == 0:
        print("----Programa Finalizado----")
        exit(0)
    else:
        print("Codigo Invalido, insira um codigo valido!!!")
