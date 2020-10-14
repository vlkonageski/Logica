"""
Faça um programa que calcule o estoque medio de uma peça, sendo que:
    estoque medio = quantidade minima + quantidade maxima  / 2
"""

qtd_minima = int(input("Informe a quantidade minima da peça: "))
qtd_maxima = int(input("Informe a quantidade maxima da peça: "))

media_estoque = (qtd_minima + qtd_maxima) / 2

print("A media da peça é {}".format(media_estoque))
