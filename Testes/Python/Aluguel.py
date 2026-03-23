carros = ["Civic", "Corolla", "Skyline", "Trueno", "HB20"]
preco = [150, 140, 90, 80, 100]
alugado = [0, 0, 0, 0, 0]

opcao = 0

while opcao != 3:

    print("\n--- LOCADORA FUJIWARA SHOP ---")
    print("1 - Carros Disponíveis")
    print("2 - Devolver Carro Alugado")
    print("3 - Sair")

    opcao = int(input("Escolha uma opção: "))

    if opcao == 1:

        print("\nCarros Disponíveis Para Aluguel:")

        for i in range(5):
            if alugado[i] == 0:
                print(f"{i} - {carros[i]} (R$ {preco[i]:.2f}/dia)")

        escolha = int(input("Escolha o carro que quer alugar: "))

        if alugado[escolha] == 0:
            alugado[escolha] = 1
            print(f"Você alugou o {carros[escolha]}")
        else:
            print("Carro indisponível")

    elif opcao == 2:

        print("Carros Alugados:")

        for i in range(5):
            if alugado[i] == 1:
                print(f"{i} - {carros[i]}")

        escolha = int(input("Escolha o carro que deseja devolver: "))

        if alugado[escolha] == 1:

            dias = int(input("Quantos dias ficou com o carro? "))

            total = preco[escolha] * dias

            print(f"O valor total é de: {total:.2f}")
            alugado[escolha] = 0

        else:
            print("Esse carro não está alugado.")

print("Encerrando o sistema...")