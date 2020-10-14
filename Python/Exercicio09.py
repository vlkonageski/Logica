"""
Ler um numero e verificar se ele é par ou impar. Quando for par armazenar esse valor em 'p'
e quando for impar armazenar em 'i'.
Exibir 'p' e 'i' no final do processamento.
"""

n = int(input("Informe um numero: "))

if(n % 2 == 0):
    p = n
    print("Numero Par!!!")
    print(p)
else:
    i = n
    print("Numero Impar!!!")
    print(i)
