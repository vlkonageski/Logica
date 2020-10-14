"""
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa
um algoritimo que calcule seu peso ideal, utilizando as seguintes formulas:
    Para homens: (72.7 * altura) - 58
    Para Mulheres: (62.1 * altura) - 44.7
"""
sexo = input("Informe seu sexo 'F' para feminino ou 'M' para masculino: ")
altura = float(input("Informe sua altura: "))

if sexo == 'M' or sexo == 'm':
    peso_ideal = (72.7 * altura) - 58
elif sexo == 'F' or sexo == 'f':
    peso_ideal = (62.1 * altura) - 44.7
else:
    print("Opção Invalida!")

print("O seu peso ideal é: {:.2f}".format(peso_ideal))
