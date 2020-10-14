# Faça um algoritimo para somar dois numeros e multiplicar o resultado pelo primeiro numero

n1 = int(input("Informe o primeiro numero: "))
n2 = int(input("Informe o segundo numero: "))

soma = n1 + n2
multiplicacao = soma * n1

print("A soma de {} + {} = {}".format(n1, n2, soma))
print("A multiplicação de {} * {} = {}".format(soma, n1, multiplicacao))