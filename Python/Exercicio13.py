"""
Desenvolva um algoritmo que:
a) leia 4 (quatro) números;
b) Calcule o quadrado de cada um;
c) Se o valor resultante do quadrado do terceiro for >= 1000, imprima-o e finalize;
d) Caso contraŕio, imprima os valores lidos e seus respectivos quadrados;
"""

n1 = int(input("Informe o primeiro valor: "))
n2 = int(input("Informe o segundo valor: "))
n3 = int(input("Informe o terceiro valor: "))
n4 = int(input("Informe o quarto valor: "))

quadrado_n1 = n1 ** 2
quadrado_n2 = n2 ** 2
quadrado_n3 = n3 ** 2
quadrado_n4 = n4 ** 2

if quadrado_n3 >= 1000:
    print(quadrado_n3)
else:
    print("O quadrado de {} é {}".format(n1, quadrado_n1))
    print("O quadrado de {} é {}".format(n2, quadrado_n2))
    print("O quadrado de {} é {}".format(n3, quadrado_n3))
    print("O quadrado de {} é {}".format(n4, quadrado_n4))
