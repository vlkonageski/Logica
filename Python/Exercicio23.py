"""
Sua organização acaba de contratar um estagiário para trabalhar no
suporte de informática, com a intenção de fazer um levantamento
nas sucatas encontradas na área. A primeira tarefa dele é testar
todos os cerca de 200 mouses que se encontram lá, testando e anotando o
estado de cada um deles, para verificar o que pode aprovetar deles.
Foi requisitado que você desenvolva um programa para registar este 
levantamento. O programa deverá receber um número indeterminado
de entradas, cada uma contendo: um número de identificação do
mouse e o tipo de defeito:
- necessita da esfera;
- necessita de limpeza;
- necessita troca do cabo ou conector;
- quebrado ou inutilizado;

Uma identificação igual a zero encerra o programa. Ao final
o programa deverá emitir o seguinte relatório:

Quantidade de mouses: 100

Situação                              Quantidade               Percentual
1-necessita da esfera                    40                        40%
2-necessita de limpeza                   30                        30%
3-necessita troca do cabo ou conector    15                        15%
4-quebrado ou inutilizado                15                        15%
"""

total = 0
defeito1 = 0
defeito2 = 0
defeito3 = 0
defeito4 = 0

print("-----OPÇÕES----\n"
    +"1-necessita da esfera\n"
    +"2-necessita de limpeza\n"
    +"3-necessita troca do cabo ou conector\n"
    +"4-quebrado ou inutilizado\n"
    +"0-Finalizar Programa")
n = int(input("Informe o codigo do defeito: "))

while n != 0:
    print("-----OPÇÕES----\n"
    +"1-necessita da esfera\n"
    +"2-necessita de limpeza\n"
    +"3-necessita troca do cabo ou conector\n"
    +"4-quebrado ou inutilizado\n"
    +"0-Finalizar Programa")
    n = int(input("Informe o codigo do defeito: "))
    if n == 1:
        total += 1
        defeito1 += 1
    elif n == 2:
        total += 1
        defeito2 += 1
    elif n == 3:
        total += 1
        defeito3 += 1
    elif n == 4:
        total += 1
        defeito4 += 1
    else:
        print("Código Invalido!!!")

p1 = int(defeito1 / total * 100)
p2 = int(defeito2 / total * 100)
p3 = int(defeito3 / total * 100)
p4 = int(defeito4 / total * 100)

print("Quantidade de mouses: {}".format(total))
print("Situação                                Quantidade                Percentual")
print("1-necessita da esfera                      {}                       {:.2f}%".format(defeito1, p1))
print("2-necessita de limpeza                     {}                       {:.2f}%".format(defeito2, p2))
print("3-necessita troca do cabo ou conector      {}                       {:.2f}%".format(defeito3, p3))
print("4-quebrado ou inutilizado                  {}                       {:.2f}%".format(defeito4, p4))
print("Programa Finalizado!!!")
