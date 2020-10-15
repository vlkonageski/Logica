"""
Elabore um algoritmo que leia as variáveis 'c' e 'n', respectivamente código
e número de horas trabalhadas de um operário. Calcule o salário sabendo-se que
ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o
excesso de pagamento armazenando-o na variável 'e'. Caso contrário zerar tal
variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento
imprimir o salário total e o salário excedente. 
"""

c = int(input("Informe o codigo do funcionario: "))
n = int(input("Informe o numero de horas trabalhadas: "))

if n <= 50:
    salario_total = n * 10
    salario_excedente = 0
else:
    e = n - 50
    salario_excedente = e * 20
    salario_total = 50 * 10

print("Salario Total R$ {:.2f}".format(salario_total))
print("Salario Excedente R$ {:.2f}".format(salario_excedente))
