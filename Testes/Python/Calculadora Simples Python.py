while True:
    try:
        numero1 = int(input('Primeiro Número: '))
        numero2 = int(input('Segundo Número: '))

        op = input('Escolha a Operação: ')

        match op:
            case "+":
                resposta = numero1 + numero2
            case "-":
                resposta = numero1 - numero2
            case "/":
                resposta = numero1 / numero2
            case "*":
                resposta = numero1 * numero2
            case _:
                print('Operação inválida, tente novamente.')
                resposta = None

        print(f'O resultado final é: {resposta} ')

    except ValueError:
        print('Erro: O input inserido é inválido, tente novamente.')
