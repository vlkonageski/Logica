"""
Faça um algoritimo que pergunte quanto voce ganha por hora e o numero de horas trabalhadas no mes.
Calcule e mostre o total do seu salario no referido mes.
"""

valor_hora = float(input("Informe quanto voce ganha por hora: "))
horas_trabalhadas = int(input("Informe a quantidade de horas trabalhadas: "))

salario = horas_trabalhadas * valor_hora

print("O seu salario é R$ {:.2f}".format(salario))
