"""
Desenvolva um gerador de tabuada, capaz de gerar a tabuada de
qualquer número inteiro entre 1 a 10. O usuário deve informar
de qual número ele deseja ver a tabuada. A saída deve ser conforme
o exemplo abaixo:

Tabuada de 5:
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50
"""

n = int(input("Informe um numero de 1 a 10: "))
x = -1

print("Tabuada de {}".format(n))
while x < 10:
    x +=1
    resultado = n * x 
    print("{} x {} = {}".format(n, x, resultado))
