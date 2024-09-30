#include <stdio.h>
#include <stdlib.h>
int main (){
    int escolha_jogador, escolha_computador;
    printf("Bem-vindo ao jogo Pedra, Papel e Tesoura!\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite a sua escolha: ");
    scanf("%d", &escolha_jogador);
    printf("Agora digite a escolha do computador: ");
    scanf("%d", &escolha_computador);
    printf("O computador escolheu: ");
    if (escolha_computador == 1) {
        printf("Pedra\n");
    } else if (escolha_computador == 2) {
        printf("Papel\n");
    } else if (escolha_computador == 3) {
        printf("Tesoura\n");
    }
 if (escolha_jogador == escolha_computador) {
        printf("Empate!\n");
    } else if ((escolha_jogador == 1 && escolha_computador == 3) ||
               (escolha_jogador == 2 && escolha_computador == 1) ||
               (escolha_jogador == 3 && escolha_computador == 2)) {
        printf("Voce venceu!\n");
    } else {
        printf("O computador venceu!\n");
    }

    return 0;
}














