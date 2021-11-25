print("Bem vindo ao jogo de adivinhação!!\n")

nume_secreto = 53

tentativa = input("Qual Numero você acha que é? ")
conversor = int(tentativa)

acertou = (nume_secreto == conversor)
maior = (nume_secreto < conversor)

if(acertou):
    print("Você acertou!!")

else:
    print("Você errou!!")
