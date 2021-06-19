
#DEFINIÇÔES GERAIS
lista= []
lista = ['brigadeiro','frango','queijo','banana','bahiana','calabresa','vegana','alho','romeu e julieta','caçarola']
tam_lista = len(lista)

#CONSULTA SABORES
def consulta():
    print (lista)
    op = input('voltar ao menu? [s = sim] [n = não]:')
    
#CADASTRAR SABORES
def cadastro():
    sabor = input('digite o sabor que quer adicionar:')
    if sabor in lista:
        print('já temos esse sabor!')
    else:
        lista.append(sabor)
    op = input('voltar ao menu? [s = sim] [n = não]:')
        
#REMOVER SABOR
def remove():
    sabor = input('digite o sabor que quer excluir:')
    if sabor in lista:
        lista.remove(sabor)
    op = input('voltar ao menu? [s = sim] [n = não]:')
        
#ESCOLHER PIZZA
def escolhe():
    sabor = input('escolha seu sabor de pizza: ')
    if sabor in lista:
        op = input('Confirmar escolha da pizza ? [s = sim] [n = não]')
        if op == 's':
            print('escolha confirmada!')
        else:
            print('escolha cancelada!')
    else:
        print('não temos esse sabor!')
        escolhe()
    op = input('voltar ao menu? [s = sim] [n = não]:')

#MENU GERAL
op = 's'
while op != 'n':
    print('===PIZZARIA BALOFA===')
    print('menu de opções:\n')
    menu = int(input(' consultar sabores - 1\n cadastrar sabor - 2\n excluir sabor - 3\n escolher pizza - 4\n encerrar - outro numero\n'))
    if menu == 1 :
        consulta()
    elif menu == 2:
        cadastro()
    elif menu == 3:
        remove()
    elif menu == 4:
        escolhe()
    else:
        op = 'n'
