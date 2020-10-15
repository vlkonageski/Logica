"""
Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita
uma mensagem: "Múltiplo de 10"
"""

n = 100
x = 0

while x <= 100:
    x += 1
    if x % 10 == 0:
        print("{} é multiplo de 10".format(x))
 