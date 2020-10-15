"""
Elabore um algoritmo que dada a idade de um nadador, classifique-o
em uma das seguintes categorias:
infantil-a = 5 a 7 anos
infantil-b = 8 a 11 anos
juvenil-a = 12 a 13 anos
juvenil-b = 14 e 17 anos
adultos = maior de 18 anos
"""

idade = int(input("Informe a idade do nadador: "))

if idade >= 5 and idade <= 7:
    print("Infantil-A")
elif idade >= 8 and idade <= 11:
    print("Infantil-B")
elif idade >= 12 and idade <= 13:
    print("Juvenil-A")
elif idade >= 14 and idade <= 17:
    print("Infantil-B")
else:
    print("Adultos")
    