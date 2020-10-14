"""
Elabore um algoritimo que leia um numero. Se positivo armazene-o em 'a', se for negativo armazene-o em 'b'.
No final mostrar o resultado.
"""

n = int(input("Informe um numero: "))

if n >= 0:
    a = n
    print("Numero Positivo!!!")
    print(a)
else:
    b = n
    print("Numero Negativo!!!")
    print(b)
