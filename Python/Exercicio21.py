"""
Faça um programa que leia um nome de usuário e a sua senha e não
aceite a senha igual ao nome de usuário, mostrando uma mensagem
de erro e voltando a pedir as informações.
"""

usuario = input("Informe o nome de usuario: ")
senha = input("Informe sua senha: ")

while usuario == senha:
    print("Ususario e senha igual!")
    usuario = input("Informe o nome de usuario: ")
    senha = input("Informe sua senha: ")

print("Usuario e senha cadastrados com sucesso!!!")