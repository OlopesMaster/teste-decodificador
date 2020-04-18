import sys

opcao = lecod = decod = execucao = cont = 0
menu = controle = ''

while True:
    print('Programa De Codificaçao/Decodificaçao')
    print('selecione alguma das opçoes abaixo:')
    opcao = int(input('1-Codificar\n2-Decodificar\n3-Encerra Programa\nInsira:'))
    if opcao == 1:
        while lecod != 7:
            print('selecione a linguagem desejada para codificar:\n\n')
            lecod = int(input(
                '0-contador de caractes(limite de 500 ca sem esapaços) \n1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse \n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:'))
            if lecod == 1:
                print("Insira:")
            elif lecod == 2:
                print("Insira:")
            elif lecod == 3:
                print("Insira:")
            elif lecod == 4:
                print("Insira:")
            elif lecod == 5:
                print("Insira:")
            elif lecod == 6:
                print("Insira:")
            elif lecod == 7:
                opcao = 0
            elif lecod == 8:
                sys.exit()
            elif lecod == 0:
                print('insira:')
        if lecod <= 7 and opcao == 1:
            opcao = int(input('\n1-codificar novamente\n2-voltar ao menu?\nInsira:'))
            if opcao == 2:
                opcao = 0
                lecod = 7
        if opcao == 1:
            while lecod != 7:
                print('selecione a linguagem desejada para codificar:\n\n')
                lecod = int(input(
                    '0-contador de caractes(limite de 500 ca sem esapaços) \n1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse \n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:'))
                if lecod == 1:
                    print("Insira:")
                elif lecod == 2:
                    print("Insira:")
                elif lecod == 3:
                    print("Insira:")
                elif lecod == 4:
                    print("Insira:")
                elif lecod == 5:
                    print("Insira:")
                elif lecod == 6:
                    print("Insira:")
                elif lecod == 7:
                    opcao = 0
                elif lecod == 8:
                    sys.exit()
                elif lecod == 0:
                    print('insira:')
                if lecod <= 7 and opcao == 1:
                    opcao = int(input('\n1-codificar novamente\n2-voltar ao menu?\nInsira:'))
                    if opcao == 2:
                        opcao = 0
                        lecod = 7
    if opcao == 2:
        while decod != 7:
            print('selecione a linguagem desejada para codificar:\n\n')
            decod = int(input(
                '0-contador de caractes(limite de 500 ca sem esapaços) \n1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse \n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:'))
            if decod == 1:
                print("Insira:")
            elif decod == 2:
                print("Insira:")
            elif decod == 3:
                print("Insira:")
            elif decod == 4:
                print("Insira:")
            elif decod == 5:
                print("Insira:")
            elif decod == 6:
                print("Insira:")
            elif decod == 7:
                opcao = 0
            elif decod == 8:
                sys.exit()
            elif decod == 0:
                print('insira:')
        if decod <= 7 and opcao == 2:
            opcao = int(input('\n1-codificar novamente\n2-voltar ao menu?\nInsira:'))
            if opcao == 2:
                opcao = 0
                lecod = 7
    if opcao == 3:
        break
print('\nobrigado por utilizar meu programa\nass. L Olopes')