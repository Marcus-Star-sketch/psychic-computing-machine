#include <stdio.h>
#include <string.h>

int main() {

    int resposta_correta = 0;
    printf("Em 2021, o recorde de Michael Schumacher, retentor de 7 titulos mundiais, quase foi superado por Lewis Hamilton, porém alguém impediu esta conquista de Lewis. Quem foi o responsável por impedir que Hamilton superasse o recorde de Schumacher?\n");
    printf("a) Max Verstappen\n");
    printf("b) Sebastian Vettel\n");
    printf("c) Valtteri Bottas\n");
    printf("d) Charles Leclerc\n");
    printf("e) Kimi Räikkönen\n");
    printf("f) Lewis Hamilton superou o recorde de Schumacher em 2021\n");
    char resposta[2];
    scanf("%s", resposta);
    if (strcmp(resposta, "a") == 0) {
        printf("Resposta correta! Max Verstappen foi o responsável por impedir que Hamilton superasse o recorde de Schumacher em 2021.");
        resposta_correta = 1;} else {
        printf("Resposta incorreta. A resposta correta é a) Max Verstappen.");
    }
    if (resposta_correta == 1) {
        printf("\nQuando Max Verstappen ultrapassou Lewis Hamilton na última volta do Grande Prêmio de Abu Dhabi de 2021, Toto Wolff, chefe da equipe Mercedes, ficou furioso, proferindo uma frase que se tornaria muito famosa. Qual foi essa frase?\n");
        printf("a) 'Isso é inaceitável!'\n");
        printf("b) 'Isso é uma vergonha!'\n");
        printf("c) 'Isso é uma piada!'\n");
        printf("d) 'No, Mike, no, Mike! This is so not right!'\n");
        char resposta2[2];
        scanf("%s", resposta2);
        if (strcmp(resposta2, "d") == 0) {
            printf("Resposta correta! Toto Wolff proferiu a frase 'No, Mike, no, Mike! This is so not right!' após a ultrapassagem de Max Verstappen sobre Lewis Hamilton na última volta do Grande Prêmio de Abu Dhabi de 2021.");
        } else {
            printf("Resposta incorreta. A resposta correta é d) 'No, Mike, no, Mike! This is so not right!'.");
            resposta_correta = 0;
        }
        if (resposta_correta == 1) {
            printf("\nEm qual equipe Max Verstappen estava competindo durante a temporada de 2021, quando impediu que Lewis Hamilton superasse o recorde de Schumacher?\n");
            printf("a) Red Bull Racing\n");
            printf("b) Mercedes-AMG Petronas\n");
            printf("c) Ferrari\n");
            printf("d) McLaren\n");
            char resposta3[2];
            scanf("%s", resposta3);
            if (strcmp(resposta3, "a") == 0) {
                printf("Resposta correta! Max Verstappen estava competindo pela equipe Red Bull Racing durante a temporada de 2021.");
            } else {
                printf("Resposta incorreta. A resposta correta é a) Red Bull Racing.");
                resposta_correta = 0;
            }
        }
        if (resposta_correta == 1) {
            printf("\n Quando Max Verstappen e Lewis Hamilton subiram ao pódio após o Grande Prêmio de Abu Dhabi, como os dois pilotos se comportaram um com o outro?\n");
            printf("a) Eles se cumprimentaram cordialmente e trocaram palavras amigáveis.\n");
            printf("b) Eles se ignoraram completamente, sem trocar palavras ou gestos.\n");
            printf("c) Eles tiveram uma discussão acalorada no pódio, expressando suas frustrações.\n");
            printf("d) Eles trocaram xingamentos e partiram para agressão, o que resultou em uma briga generalizada no paddock, incluindo fãs, membros da equipe e outros pilotos, que tiveram que ser contidos pela segurança do evento.\n");
            char resposta4[2];
            scanf("%s", resposta4);
            if (strcmp(resposta4, "a") == 0) {
                printf("Resposta correta! Max Verstappen e Lewis Hamilton se cumprimentaram cordialmente e trocaram palavras amigáveis no pódio após o Grande Prêmio de Abu Dhabi de 2021.");
            }
            if (strcmp(resposta4, "d") == 0) {
                printf("Resposta incorreta! Eu não sei se é bom acreditar em qualquer opção que seja a maior, enfim.");
                resposta_correta = 0;
            } else {
                printf("Resposta incorreta. A resposta correta é a) Eles se cumprimentaram cordialmente e trocaram palavras amigáveis.");
            }
        }
        if (resposta_correta == 1) {
            printf("\nQuando você começou esse teste, você sabia que esse teste era apenas um pretesto para reunir membros para o partido da amizade, formado pelo Amigo?\n");
            printf("a) Sim, eu sabia que esse teste era um pretesto para reunir membros para o partido da amizade.\n");
            printf("b) Não, eu não sabia que esse teste era um pretesto para reunir membros para o partido da amizade.\n");
            char resposta5[2];
            scanf("%s", resposta5);
            if (strcmp(resposta5, "a") == 0) {
                printf("Não minta para o Amigo. O Partido Da Amizade não gosta de mentirosos, e acredite, mentirosos são descartaveis para o Amigo. Você não é bem-vindo no Partido da Amizade, e o Amigo não quer pessoas como você em seu partido. Vá embora, e não volte mais.");
            } else {
                printf("O Amigo aguarda sua visita. Nós fomos escolhidos como amigos pelo cosmos, e tornaremos essa terra o nosso paraíso! Aguarde instruções do Amigo. Acredite, ele sabe como te encontrar. Adeus.");
            }
        }
    }
}