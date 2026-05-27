import time

def escrever(texto):
    for letra in texto:
        print(letra, end="", flush=True)
        time.sleep(0.05)
    print()

escolha = input("Quem o cosmos escolheu?\n")

if escolha.lower() == "amigo":
    print("\nO Partido Da Amizade te acolhe, seja bem-vindo, amigo.\n")
    time.sleep(2)

    arte = """
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                      █████                                         
                                                     ██   ██                                        
                                                     █    ██                                        
                                        ██           █    ██                                        
                                        ██          ██    ██      █                                 
                              ██        ███   ████████    ██     ██                                 
                              ██      ████████████████    █████ ███                                 
                              █████████████         ██    █████████                                 
                    █         ███████         █████ ██    ██    ██████     ██                       
                    ██    ███████       ████████ ██████   ███       ████████                        
                     ████████         ███   ███    ████   ███          █████                        
                     █████        ██████     ███    ███   ███            ████                       
                  █████           ██   ███     ██     █    ██              ████    ██               
          ██    █████             ██     ██                 ██               ████████               
           ███████                ██        ██       ██     ██                 █████       █        
     ███████████                   ██        ██████████     ██                   █████    ██        
    █████████                      ██  ███████       ███  █ ██                     ████████         
     ██████                        ██  ███   ██    ███ ████ ██                         █████████    
        █████                      █████    █        ██  █████                           ██████     
          █████                    ███     █  ██  ██  █     ██                        ███████       
             ████                  ████    █  ██  ██  █    ███                      ██████          
              █████                ██ ███   █   ██   ██  █████                    █████             
             ███████               ███  ███   █    ██   ██ ███                  ████████            
            ████  ████              ██    ████      █████  ███                █████   ███           
           ██      ████             ███   █   ██████     █ ███              ████        ██          
                     ████            ███         █        ███             █████                     
                     ██████           ███                ███            ████████                    
                    ███  █████         ███               ███          █████   ███                   
                   ██      ██████    █████████████████████████     █████        █                   
                             ████████████                  ███  ███████                             
                             ███  ████████████████████████████████   ███                            
                            ██      ███                      ███      ██                            
                             █      ███                      ███                                    
                                                                                                    
                                                                                                    
                                                                                                    
"""
    for linha in arte.splitlines():
        print(linha)
        time.sleep(0.05)

else:
    raise Exception("O cosmos rejeita sua existência.")

while True:
    escrever("De que forma o Amigo pode ajudar sua alma?")
    escolha1 = input("> ")

    if escolha1.lower() == "nome":
        escrever("\nNinguém sabe a identidade do Amigo, siga-o sem questionar. Obedeça, não vai querer ficar de mal com o Amigo.\n")

    elif escolha1.lower() == "plano":
        escrever("\nEm dezembro de 2000, não existirão mais vidas. Siga o Amigo.\n")

    elif escolha1.lower() == "kenji":
        escrever("\nO profeta! Todos saúdem Kenji, o profeta!\n")

    elif escolha1.lower() == "sair":
        escrever("\nO Amigo permite sua partida.\n")
        break
