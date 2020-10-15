#Elabore um programa que gera e escreve os números ímpares dos números entre 100 e 200

for n in range(100, 201):
    if n % 2 != 0:
        print("{} é impar".format(n))
 
    