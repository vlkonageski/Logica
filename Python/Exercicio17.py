"""
Faça um algoritmo que determine o maior em N números. A condição de
parada é a entrada de um valor 0, ou seja, o algoritmo deve ficar
calculando o maior valor até que a entrada seja igual a 0 (zero).
"""

n = 1
maior = 0

while n != 0:
    n = int(input("Informe um numero: "))
    if n > maior:
        maior = n
    
print("O maior valor digitado foi: {}".format(maior))
print("Programa Finalizado")