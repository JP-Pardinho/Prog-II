######################################################
#                                                    #
#       Introdução a Programação (2023/2)            #
#       EP - Simulação de Máquina Automática         #
#       Nome: João Pedro Pardinho Rodrigues          #
#       Matrícula: 2023201073                        #
#                                                    #
######################################################


from os import system, name 

def limpaTela(): 
    """
    Função responsável por limpar o terminal. 

    Retorno:
    Função não retona nada.
    """
    if name == 'nt':
        system('cls') 
    else:
        system('clear') 


def Msg_BemVindo():
    """
    Função responsável por mostrar a mensagem de "bem vindo" aos clientes/usuários

    Retorno:
    Função não retona nada.

    """
    RST     = '\033[00m'    # Variavel responsavel por retornar o terminar para cor padrão, ao utilizar print(RST)
    BLUE    = '\033[34m'    # Variavel responsavel por mudar a cor da fonte do terminal para azul, ao utilizar print(BLUE)
    YELLOW  = '\033[1;33m'  # Variavel responsavel por mudar a cor da fonte do terminal para amarelo, ao utilizar print(YELLOW)
    print(BLUE) # Muda a cor da fonte para azul
    print("""
         ____   ______  __  __           __      __ _____  _   _  _____    ____
        |  _ \ |  ____||  \/  |          \ \    / /|_   _|| \ | ||  __ \  / __ \ 
        | |_) || |__   | \  / |  ______   \ \  / /   | |  |  \| || |  | || |  | |
        |  _ < |  __|  | |\/| | |______|   \ \/ /    | |  | . ` || |  | || |  | |
        | |_) || |____ | |  | |             \  /    _| |_ | |\  || |__| || |__| |
        |____/ |______||_|  |_|              \/    |_____||_| \_||_____/  \____/ 
          
                                 __ _   ___  
                                / _` | / _ \ 
                               | (_| || (_) |
                                \__,_| \___/  

 _____                   _  _         _                   _           ____ 
|  __ \                 | |(_)       | |                 ( )         |  _ \ 
| |__) | __ _  _ __   __| | _  _ __  | |__    ___   ___  |/  ___     | |_) |  __ _  _ __
|  ___/ / _` || '__| / _` || || '_ \ | '_ \  / _ \ / __|    / __|    |  _ <  / _` || '__|
| |    | (_| || |   | (_| || || | | || | | || (_) |\__ \    \__ \    | |_) || (_| || |
|_|     \__,_||_|    \__,_||_||_| |_||_| |_| \___/ |___/    |___/    |____/  \__,_||_|

""")
    print(YELLOW)
    input("--> Enter para continuar...")
    print(RST)


def menu(a, b, c, qt20, qt10, qt5, qt2, qt1, qt_05):
    """ 
    Função responsável por exibir os produtos do estabelecimento

    Parâmetros:
    a: Estoque do produto 'Caipirinha'
    b: Estoque do produto 'Gin Tropical'
    c: Estoque do produto 'El Diabo'

    qt20:   Quantidade de notas de  R$20,00
    qt10:   Quantidade de notas de  R$10,00
    qt5:    Quantidade de notas de  R$5,00
    qt2:    Quantidade de notas de  R$2,00
    qt1:    Quantidade de moedas de R$1,00
    qt_05:  Quantidade de moedas de R$0,50

    Retorno:
    Função não retona nada.

    """

    RST     = '\033[00m'    # Variavel responsavel por retornar o terminar para cor padrão, ao utilizar print(RST)
    BLUE    = '\033[1;34m'  # Variavel responsavel por mudar a cor da fonte do terminal para azul, ao utilizar print(BLUE)
    print(BLUE) # Muda a cor da fonte para azul e negrito
    print("+" + "-" * 50 + "+")
    print("|                      Drinks                      |")
    print("+" + "-" * 50 + "+")
    print("|" + " " * 50 + "|")               
    print(f"|  1 - Caipirinha..................{'........R$6,00' if a > 0 else '..Indisponível'}  |") # Alterar valor
    print("|" + " " * 50 + "|")
    print(f"|  2 - Gin Tropical................{'........R$9,50' if b > 0 else '..Indisponível'}  |") # Alterar valor
    print("|" + " " * 50 + "|")
    print(f"|  3 - El Diabo....................{'.......R$13,50' if c > 0 else '..Indisponível'}  |") # Alterar valor
    print("|" + " " * 50 + "|")
    print("+" + "-" * 50 + "+")
    print("|                   Outras opções                  |")
    print("+" + "-" * 50 + "+")
    print("|" + " " * 50 + "|")
    print("|  4 - Informações internas                        |")
    print("|" + " " * 50 + "|")
    print("|  5 - Sair                                        |")
    print("|" + " " * 50 + "|")
    print("+" + "-" * 50 + "+")
    if qt20 == 0 and qt10 == 0 and qt5 == 0 and qt2 == 0 and qt1 == 0 and qt_05 == 0:
        print("+" + "-" * 50 + "+")
        print("|        ATENÇÃO A MÁQUINA ESTÁ SEM TROCO!         |")
        print("+" + "-" * 50 + "+")
    print(RST)



def Verificar_Valor (funcao, mensagem=""):
    """
    Função responsavel por verificar se o valor digitado é valido ou não
    
    Caso valor digitado seja inválido imprime uma mensagem de erro,
    até que seja digitado um valor valido

    Retorno:
        Função retorna funcao(input(mensagem)). 
    """ 
    RED = '\033[1;31m'  # Variavel responsavel por mudar a cor da fonte do terminal para vermelho, ao utilizar print(RED)
    RST = '\033[00m'    # Variavel responsavel por retornar o terminar para cor padrão, ao utilizar print(RST)
    while True:
        try:
            return funcao(input(mensagem))
        except:
            print(RED)
            print("+" + "- " * 25 + "+")
            print("|         Erro: Valor digitado é inválido!         |")
            print("+" + "- " * 25 + "+")
            print(RST)



def Escolha_Opcao (q):
    """
    Retorna o numero da opção escolhida "op", caso seja digitado um valor fora das possiveis opções,
    imprime uma mensagem de "valor inválido"
    
    Parâmetro:
        q: quantidade de opções
    
    Retorno:
        Retorna qual opção foi escolhida (op)
    """
    RED     = '\033[1;31m'  # Variavel responsavel por mudar a cor da fonte do terminal para vermelho, ao utilizar print(RED)
    RST     = '\033[00m'    # Variavel responsavel por retornar o terminar para cor padrão, ao utilizar print(RST)
    while True:
        op = Verificar_Valor(int, "==> Escolha uma opção: ") # op = int(input("==> Escolha uma opção: "))
        if 1 <= op <= q:
            return op
        print(RED)
        print("+" + "- " * 25 + "+")
        print(f"|   Valor inválido! Digite uma opção entre 1 e {q}   |")
        print("+" + "- " * 25 + "+")
        print(RST)



def Verifica_Nota(MensagemInput):
    """
    Função responsavel por verificar se o valor digitado é uma das notas que a maquina aceita ou não 

    Parâmetro:
        MensagemInput: Mensagem que será impressa ao usuário

    Retorno:
        Retorna a nota caso usuario digite um valor aceito pela maquina

    """
    RED     = '\033[1;31m'  # (i)   Variavel responsavel por mudar a cor da fonte do terminal para vermelho, ao utilizar print(RED)
    RST     = '\033[00m'    # (ii)  Variavel responsavel por retornar o terminar para cor padrão, ao utilizar print(RST)

    while True:
        nota = Verificar_Valor(float, MensagemInput)
        if nota == 20 or nota == 10 or nota == 5 or nota == 2 or nota == 1 or nota == 0.5:
            return nota
        print(RED) # (i)
        print("+" + "- " * 25 + "+")
        print("|                Valor não reconhecido!            |")
        print("+" + "- " * 25 + "+")
        print(RST) # (ii)


def notas_novas (nota, qt20, qt10, qt5, qt2, qt1, qt_05):
    """
    Função responsavel pra adicionar novas notas ao caixa da loja

    Parâmetros:
        nota:           Pagamento que o cliente faz a maquina
        qt20:           Quantidade de notas de  R$20,00
        qt10:           Quantidade de notas de  R$10,00
        qt5:            Quantidade de notas de  R$5,00
        qt2:            Quantidade de notas de  R$2,00
        qt1:            Quantidade de moedas de R$1,00
        qt_05:          Quantidade de moedas de R$0,50

    Retorno:
        Retorna a quantidade de cedulas (qt20, qt10, qt5, qt2, qt1, qt_05)
    """
    if nota == 20:
        qt20 += 1
    elif nota == 10:
        qt10 += 1
    elif nota == 5:
        qt5 += 1
    elif nota == 2:
        qt2 += 1
    elif nota == 1:
        qt1 += 1
    elif nota == 0.5:
        qt_05 += 1
        
    return qt20, qt10, qt5, qt2, qt1, qt_05


def devolver_notas(valorpago, qt20, qt10, qt5, qt2, qt1, qt_05):
    """
    Função responsavel por devolver as cedulas para o caixa da maquina
    caso o usuario não conclua uma compra
    
    Parâmetros:
        valorpago:      Valor que o cliente inseriu na maquina
        qt20:           Quantidade de notas de  R$20,00
        qt10:           Quantidade de notas de  R$10,00
        qt5:            Quantidade de notas de  R$5,00
        qt2:            Quantidade de notas de  R$2,00
        qt1:            Quantidade de moedas de R$1,00
        qt_05:          Quantidade de moedas de R$0,50

    Retorno:
        Retorna a quantidade de cedulas (qt20, qt10, qt5, qt2, qt1, qt_05)
        Retorna valorpago
    """
    if valorpago >= 20 and qt20 != 0:
        qt20 -= 1
        valorpago -= 20 
    elif valorpago >= 10 and qt10 != 0:
        qt10 -= 1
        valorpago -= 10
    elif valorpago >= 5 and qt5 != 0:
        qt5 -= 1
        valorpago -= 5
    elif valorpago >= 2 and qt2 != 0:
        qt2 -= 1
        valorpago -= 2
    elif valorpago >= 1 and qt1 != 0:
        qt1 -= 1
        valorpago -= 1
    elif valorpago >= 0.5 and qt_05 != 0:
        qt_05 -= 1
        valorpago -= 0.5
    return valorpago, qt20, qt10, qt5, qt2, qt1, qt_05



def calcular_troco(valorpago, valorproduto, fat, qt20, qt10, qt5, qt2, qt1, qt_05, qt_drink1, qt_drink2, qt_drink3):
    """
    Função responsavel por calcular o troco

    Parâmetros:
        valorpago:      Valor das notas que o usuario adicionou na maquina
        valorproduto:   Valor do drink que ele está comprando
        fat:            Faturamento
        qt20:           Quantidade de notas de  R$20,00
        qt10:           Quantidade de notas de  R$10,00
        qt5:            Quantidade de notas de  R$5,00
        qt2:            Quantidade de notas de  R$2,00
        qt1:            Quantidade de moedas de R$1,00
        qt_05:          Quantidade de moedas de R$0,50
        qt_drink1:      Quantidade do drink 'Caipirinha'
        qt_drink2:      Quantidade do drink 'Gin Tropical'
        qt_drink3:      Quantidade do drink 'El Diabo'

    Retorno:
        Retorna a quantidade de cedulas (qt20, qt10, qt5, qt2, qt1, qt_05)
        Retorna Faturamento (fat)
        Retorna Pergunta (True/False)
    """
    troco20 = 0
    troco10 = 0
    troco5  = 0
    troco2  = 0
    troco1  = 0
    troco05 = 0
    pergunta = True
    troco = valorpago - valorproduto

    print()
    print(f"Valor pago: R${valorpago:.2f}")
    print(f"Troco: R${troco:.2f}")
    print()
    print(f"{'Retire seu troco' if troco != 0 else 'Não há troco'}")
    while troco != 0:
        if troco >= 20 and qt20 != 0:
            qt20 -= 1
            troco -= 20 
            troco20 += 20
            print("R$20,00")
        elif troco >= 10 and qt10 != 0:
            qt10 -= 1
            troco -= 10
            troco10 += 10
            print("R$10,00")
        elif troco >= 5 and qt5 != 0:
            qt5 -= 1
            troco -= 5
            troco5  += 5
            print("R$5,00")
        elif troco >= 2 and qt2 != 0:
            qt2 -= 1
            troco -= 2
            troco2  += 2
            print("R$2,00")
        elif troco >= 1 and qt1 != 0:
            qt1 -= 1
            troco -= 1
            troco1  += 1 
            print("R$1,00")
        elif troco >= 0.5 and qt_05 != 0:
            qt_05 -= 1
            troco -= 0.5
            troco05 += 0.5
            print("R$0,50")
        else:
            limpaTela()
            menu(qt_drink1, qt_drink2, qt_drink3, qt20, qt10, qt5, qt2, qt1, qt_05)
            trocototal = troco20 + troco10 + troco5 + troco2 + troco1 + troco05
            pergunta = True
            print()
            print(f"Valor pago: R${valorpago:.2f}")
            print(f"Troco: R${troco + trocototal:.2f}")
            print()
            print(f"Não possuimos o troco para o valor pago")
            if trocototal > 0:
                print(f"Só conseguimos devolver R${trocototal:.2f}")
            pergunta = input("Deseja realizar a compra mesmo assim? (S/N) ").lower()

            if pergunta == "s":
                pergunta = True
                if trocototal != 0:
                    print("Retire seu troco: ")
                    while trocototal != 0:
                        if troco20 >= 20:
                            print("R$20,00")
                            troco20 -= 20
                        elif troco10 >= 10:
                            print("R$10,00")
                            troco10 -= 10
                        elif troco5 >= 5:
                            print("R$5,00")
                            troco5 -= 5
                        elif troco2 >= 2:
                            print("R$2,00")
                            troco2 -= 2
                        elif troco1 >= 1:
                            print("R$1,00")
                            troco1 -= 1
                        elif troco05 >= 0.5:
                            print("R$0,50")
                            troco05 -= 0.5
                        break
                print(f"Ficamos te devendo o troco: R${troco:.2f}")
                return qt20, qt10, qt5, qt2, qt1, qt_05, fat, pergunta
            
            elif pergunta == "n":
                limpaTela()
                menu(qt_drink1, qt_drink2, qt_drink3, qt20, qt10, qt5, qt2, qt1, qt_05)
                pergunta = False
                print(f"Retire o valor: R${valorpago:.2f}")
                while valorpago != 0:
                    valorpago, qt20, qt10, qt5, qt2, qt1, qt_05 = devolver_notas(valorpago, qt20, qt10, qt5, qt2, qt1, qt_05)
                    break
                fat -= valorproduto
                return qt20, qt10, qt5, qt2, qt1, qt_05, fat, pergunta
            
            else:
                print("Resposta invalida, responda com (S/N)")
    print("Obrigado pela compra!")
    return qt20, qt10, qt5, qt2, qt1, qt_05, fat, pergunta


def maquina(a, b, c, qt20, qt10, qt5, qt2, qt1, qt_05):
    """
    Função responsável por exibir as mensagens , realizar as vendas e
    controlar o estoque dos produtos e notas/moedas.

    Parâmetros:
    a: Estoque do produto 'Caipirinha'
    b: Estoque do produto 'Gin Tropical'
    c: Estoque do produto 'El Diabo'
    qt20:   Quantidade de notas de  R$20,00
    qt10:   Quantidade de notas de  R$10,00
    qt5:    Quantidade de notas de  R$5,00
    qt2:    Quantidade de notas de  R$2,00
    qt1:    Quantidade de moedas de R$1,00
    qt_05:  Quantidade de moedas de R$0,50

    Retorno:
    Função não retona nada.
    """
    
    RED     = '\033[1;31m'  # (i)   Variavel responsavel por mudar a cor da fonte do terminal para vermelho e em negrito, ao utilizar print(RED)
    GRAY    = '\033[30m'    # (ii)  Variavel responsavel por mudar a cor da fonte do terminal para cinza, ao utilizar print(GRAY)
    YELLOW  = '\033[33m'    # (iii) Variavel responsavel por mudar a cor da fonte do terminal para amarelo, ao utilizar print(YELLOW)
    GREEN   = '\033[32m'    # (iv)  Variavel responsavel por mudar a cor da fonte do terminal para verde, ao utilizar print(GREEN)
    RST     = '\033[00m'    # (v)   Variavel responsavel por retornar o terminar para cor padrão, ao utilizar print(RST)
    BLUE    = '\033[34m'    # (vi)  Variavel responsavel por mudar a cor da fonte do terminal para azul, ao utilizar print(BLUE)

    limpaTela()
    
    faturamento = 0
    pergunta    = True

    vl_drink1   = 6     # Valor do primeiro produto 
    vl_drink2   = 9.5   # Valor do segundo produto
    vl_drink3   = 13.5  # Valor do terceiro produto

    qt_drink1   = a     # Quantidade de Caipirinha 
    qt_drink2   = b     # Quantidade de Gin Tropical
    qt_drink3   = c     # Quantidade de El Diabo
     

    while True:
        limpaTela()
        menu(qt_drink1, qt_drink2, qt_drink3, qt20, qt10, qt5, qt2, qt1, qt_05)
        opcao = Escolha_Opcao(5)
        
        if opcao == 1:
            if qt_drink1 > 0:
                print(YELLOW)       # (iii)           
                print("Você escolheu o drink 'Caipirinha!'")
                print(f"Valor: R${vl_drink1:.2f}")
                print(GREEN)        # (iv)
                pag1 = Verifica_Nota("Insira o dinheiro: R$") # nota = Verificar_Nota(float(input("Insira o dinheiro: R$")))
                qt20, qt10, qt5, qt2, qt1, qt_05 = notas_novas(pag1, qt20, qt10, qt5, qt2, qt1, qt_05)
                print(RST)          # (v)
                while pag1 < vl_drink1:
                    print(GREEN)    # (iv)
                    pag2 = Verifica_Nota("Insira o dinheiro: R$")
                    qt20, qt10, qt5, qt2, qt1, qt_05 = notas_novas(pag2, qt20, qt10, qt5, qt2, qt1, qt_05)
                    pag1 = pag1 + pag2
                    print(RST)      # (v) 
                
                qt_drink1 -= 1

                faturamento += vl_drink1

                qt20, qt10, qt5, qt2, qt1, qt_05, faturamento, pergunta = calcular_troco(pag1, vl_drink1, faturamento, qt20, qt10, qt5, qt2, qt1, qt_05, qt_drink1, qt_drink2, qt_drink3)
                
                if pergunta == False:
                    qt_drink1 += 1

                print(YELLOW)       # (iii)
                input("--> Enter para continuar...")
                print(RST)          # (v)
            else:
                print(RED)          # (i)
                print("+" + "- " * 32 + "+")
                print("| Infelizmente nosso drink de 'Caipirinha' está fora do estoque. |")
                print("+" + "- " * 32 + "+")
                print(YELLOW)       # (iii)
                input("--> Enter para continuar...")
                print(RST)          # (v) 

        elif opcao == 2:
            if qt_drink2 > 0:
                print(YELLOW)       # (iii)
                print("Você escolheu o drink 'Gin Tropical!'")
                print(f"Valor: R${vl_drink2:.2f}")
                print(GREEN)
                pag1 = Verifica_Nota("Insira o dinheiro: R$") # nota = Verifica_Nota(float(input("Insira o dinheiro: R$")))
                qt20, qt10, qt5, qt2, qt1, qt_05 = notas_novas(pag1, qt20, qt10, qt5, qt2, qt1, qt_05)
                print(RST)          # (v) 
                while pag1 < vl_drink2:
                    print(GREEN)    # (iv)
                    pag2 = Verifica_Nota("Insira o dinheiro: R$")
                    qt20, qt10, qt5, qt2, qt1, qt_05 = notas_novas(pag2, qt20, qt10, qt5, qt2, qt1, qt_05)
                    pag1 = pag1 + pag2
                    print(RST)      # (v) 

                qt_drink2 -= 1

                faturamento = faturamento + vl_drink2

                qt20, qt10, qt5, qt2, qt1, qt_05, faturamento, pergunta = calcular_troco(pag1, vl_drink2, faturamento, qt20, qt10, qt5, qt2, qt1, qt_05, qt_drink1, qt_drink2, qt_drink3)

                if pergunta == False:
                    qt_drink2 += 1

                print(YELLOW)       # (iii)
                input("--> Enter para continuar...")
                print(RST)          # (v) 
            else:
                print(RED)          # (i)
                print("+" + "- " * 33 + "+")
                print("| Infelizmente nosso drink de 'Gin Tropical' está fora do estoque. |")
                print("+" + "- " * 33 + "+")
                print(YELLOW)       # (iii) 
                input("--> Enter para continuar...")
                print(RST)          # (v) 
        
        elif opcao == 3:
            if qt_drink3 > 0:
                print(YELLOW)       # (iii)
                print("Você escolheu o drink 'El Diabo!'")
                print(f"Valor: R${vl_drink3:.2f}")
                print(GREEN)        # (iv)
                pag1 = Verifica_Nota("Insira o dinheiro: R$") # nota = Verifica_Nota(float(input("Insira o dinheiro: R$")))
                qt20, qt10, qt5, qt2, qt1, qt_05 = notas_novas(pag1, qt20, qt10, qt5, qt2, qt1, qt_05)
                print(RST)          # (v)
                while pag1 < vl_drink3:
                    print(GREEN)    # (iv)
                    pag2 = Verifica_Nota("Insira o dinheiro: R$")
                    qt20, qt10, qt5, qt2, qt1, qt_05 = notas_novas(pag1, qt20, qt10, qt5, qt2, qt1, qt_05)
                    pag1 = pag1 + pag2
                    print(RST)      # (v) 
                
                qt_drink3 -= 1
                
                faturamento = faturamento + vl_drink3

                qt20, qt10, qt5, qt2, qt1, qt_05, faturamento, pergunta = calcular_troco(pag1, vl_drink3, faturamento, qt20, qt10, qt5, qt2, qt1, qt_05, qt_drink1, qt_drink2, qt_drink3)

                if pergunta == False:
                    qt_drink3 += 1

                print(YELLOW)       # (iii) 
                input("--> Enter para continuar...")
                print(RST)          # (v) 
            else: 
                print(RED)          # (i)
                print("+" + "- " * 31 + "+")
                print("| Infelizmente nosso drink de 'El Diabo' está fora do estoque. |")
                print("+" + "- " * 31 + "+")
                print(YELLOW)       # (iii) 
                input("--> Enter para continuar...")
                print(RST)          # (v)       

        elif opcao == 4:
            print(YELLOW)           # (iii)
            print("+" + "- " * 25 + "+")
            print("|               Informações internas               |")
            print("+" + "- " * 25 + "+")
            print(GRAY)             # (ii)
            print(f" Caipirinha:     {qt_drink1}un.")
            print(f" Gin Tropical:   {qt_drink2}un.")
            print(f" El Diabo:       {qt_drink3}un.")
            print()
            print(f" Notas de  R$20,00: {qt20}")
            print(f" Notas de  R$10,00: {qt10}")
            print(f" Notas de   R$5,00: {qt5}")
            print(f" Notas de   R$2,00: {qt2}")
            print(f" Moedas de  R$1,00: {qt1}")
            print(f" Moedas de  R$0,50: {qt_05}")
            print(GREEN)            # (iv)
            print(f" Faturamento: R${faturamento:.2f}")
            print(RST)              # (v)
            print(YELLOW)           # (iii)
            print("+" + "- " * 25 + "+")
            print(YELLOW)           # (iii) 
            input("--> Enter para continuar...")
            print(RST)              # (v)


        elif opcao == 5:
            print(BLUE)             # (vi)
            print("""
  ____   _            _                    _                         _                                __                                 _
 / __ \ | |          (_)                  | |                       | |                              / _|                               (_)
| |  | || |__   _ __  _   __ _   __ _   __| |  ___      _ __    ___ | |  __ _     _ __   _ __   ___ | |_   ___  _ __   ___  _ __    ___  _   __ _
| |  | || '_ \ | '__|| | / _` | / _` | / _` | / _ \    | '_ \  / _ \| | / _` |   | '_ \ | '__| / _ \|  _| / _ \| '__| / _ \| '_ \  / __|| | / _` |
| |__| || |_) || |   | || (_| || (_| || (_| || (_) |   | |_) ||  __/| || (_| |   | |_) || |   |  __/| |  |  __/| |   |  __/| | | || (__ | || (_| |
 \____/ |_.__/ |_|   |_| \__, | \__,_| \__,_| \___/    | .__/  \___||_| \__,_|   | .__/ |_|    \___||_|   \___||_|    \___||_| |_| \___||_| \__,_|
                          __/ |                        | |                       | |
                         |___/                         |_|                       |_|
                   
""")
            print(RST)              # (v)
            break

def main():
    """
    Função main tradicional. 
    """
    limpaTela()                         # Limpa a tela do terminal
    Msg_BemVindo()                      # Exibe a tela de abertura quando o programa é executado
    maquina(5, 5, 5, 5, 5, 5, 5, 5, 5)  # Controla mensagens, vendas, estoque dos prdutos e das cédulas      

main()




