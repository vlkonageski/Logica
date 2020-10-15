"""
A Secretaria de Meio Ambiente que controla o índice de poluição, mantém 3 grupos de indústrias que são
altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,25. 
#grupo1
Se o índice sobe para 0,3 as indústrias do 1 grupo são intimadas a suspenderem suas atividades. 
#grupo 2
Se o índice crescer para 0,4 as indústrias do 1 e 2 grupos são intimadas a suspenderem
suas atividades. 
#grupo 3
Se o índice atingir 0,5 todos os grupos devem ser notificados
para paralisarem suas atividades. 
Faça um algoritmo que leia o índice de poluição
medido e emita a notificação adequada aos diferentes grupos de empresas.
"""

indice = float(input("Informe o indice de poluição: "))

if indice < 0.25:
    print("Indice de poluição aceitavel!")
elif indice >= 0.3 and indice < 0.4:
    print("Industrias do Grupo 1 devem suspender suas atividades!")
elif indice >= 0.4 and indice < 0.5:
    print("Industrias dos Grupos 1 e 2 devem suspender suas atividades!")
else:
    print("Todos os grupos devem suspender suas atividades!")
