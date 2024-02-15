from os import system as cmd, name as osname
import emoji

parrotEmoji = emoji.emojize(":parrot:")

while (True):
    cmd('cls' if osname == "nt" else "clear")
    print("Eu sou o pypygaio, irei te imitar.")
    print('Para sair, digite \"sair\"')
    userinput = input("Digite qualquer coisa: ")
    print(f"{parrotEmoji} - {userinput}")
    if (userinput == "sair"):
        break
    input("Aperte Enter para continuar...")
 