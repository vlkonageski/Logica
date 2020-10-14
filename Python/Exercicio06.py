"""
Tendo como dados de entrada a altura de uma pessoa, construa um algoritimo
que calcule seu peso ideal, usando a seguinte formula:
    (72,7 * altura) - 58
"""

altura = float(input("Informe sua altura: "))

peso_ideal = (72.7 * altura) - 58

print("Seu peso ideal é: {:.2f}".format(peso_ideal))
