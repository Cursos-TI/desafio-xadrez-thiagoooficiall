#include <stdio.h>
#include <stdlib.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao, escolha, casas;
    int direcao;

    printf("BEM-VINDO AO JOGO DE XADREZ!\n\n");
    printf("Selecione qual peça deseja mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("Opção: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida. Por favor, digite um número.\n");
        limparBuffer();
        return 1;
    }
    limparBuffer();

    switch (opcao) {
        case 1:
            // Lógica da Torre (já implementada)
            printf("\nVocê escolheu a Torre!\n");
            printf("Para que lado deseja movimentar? (1 - Direita ou 2 - Esquerda): ");

            if (scanf("%d", &escolha) != 1) {
                printf("Entrada inválida. Por favor, digite 1 ou 2.\n");
                limparBuffer();
                return 1;
            }
            limparBuffer();

            printf("Quantas casas deseja mover? (Máximo 9): ");
            if (scanf("%d", &casas) != 1 || casas <= 0 || casas > 8) {
                printf("Entrada inválida. Por favor, digite um número entre 1 e 8.\n");
                limparBuffer();
                return 1;
            }
            limparBuffer();

            if (escolha == 1) {
                printf("Movendo a Torre %d vezes para a Direita:\n", casas);
                for (int i = 1; i <= casas; i++) {
                    printf("Movimento %d: Torre moveu para a Direita!\n", i);
                }
            } else if (escolha == 2) {
                printf("Movendo a Torre %d vezes para a Esquerda:\n", casas);
                for (int i = 1; i <= casas; i++) {
                    printf("Movimento %d: Torre moveu para a Esquerda!\n", i);
                }
            } else {
                printf("Opção de movimento inválida.\n");
            }
            break;

        case 2:
            // Lógica do Bispo (já implementada)
            printf("Você escolheu o Bispo!\n");
            printf("Para qual direção deseja mover o Bispo?\n");
            printf("1 - Cima, Direita\n");
            printf("2 - Cima, Esquerda\n");
            printf("3 - Baixo, Direita\n");
            printf("4 - Baixo, Esquerda\n");
            printf("Direção: ");

            if (scanf("%d", &direcao) != 1 || direcao < 1 || direcao > 4) {
                printf("Entrada inválida. Por favor, digite um número entre 1 e 4.\n");
                limparBuffer();
                return 1;
            }
            limparBuffer();

            printf("Quantas casas deseja mover? (Máximo 8): ");
            if (scanf("%d", &casas) != 1 || casas <= 0 || casas > 8) {
                printf("Entrada inválida. Por favor, digite um número entre 1 e 9.\n");
                limparBuffer();
                return 1;
            }
            limparBuffer();

            printf("Movendo o Bispo %d vezes na diagonal:\n", casas);
            for (int i = 1; i <= casas; i++) {
                switch (direcao) {
                    case 1:
                        printf("Movimento %d: Cima, Direita\n", i);
                        break;
                    case 2:
                        printf("Movimento %d: Cima, Esquerda\n", i);
                        break;
                    case 3:
                        printf("Movimento %d: Baixo, Direita\n", i);
                        break;
                    case 4:
                        printf("Movimento %d: Baixo, Esquerda\n", i);
                        break;
                }
            }
            break;

        case 3:
            printf("Você escolheu a Rainha!\n");
            printf("Para qual direção deseja mover a Rainha?\n");
            printf("1 - Cima\n");
            printf("2 - Baixo\n");
            printf("3 - Direita\n");
            printf("4 - Esquerda\n");
            printf("5 - Cima, Direita\n");
            printf("6 - Cima, Esquerda\n");
            printf("7 - Baixo, Direita\n");
            printf("8 - Baixo, Esquerda\n");
            printf("Direção: ");

            if (scanf("%d", &direcao) != 1 || direcao < 1 || direcao > 8) {
                printf("Entrada inválida. Por favor, digite um número entre 1 e 8.\n");
                limparBuffer();
                return 1;
            }
            limparBuffer();

            printf("Quantas casas deseja mover? (Máximo 8): ");
            if (scanf("%d", &casas) != 1 || casas <= 0 || casas > 8) {
                printf("Entrada inválida. Por favor, digite um número entre 1 e 8.\n");
                limparBuffer();
                return 1;
            }
            limparBuffer();

            printf("Movendo a Rainha %d vezes:\n", casas);
            for (int i = 1; i <= casas; i++) {
                switch (direcao) {
                    case 1:
                        printf("Movimento %d: Cima\n", i);
                        break;
                    case 2:
                        printf("Movimento %d: Baixo\n", i);
                        break;
                    case 3:
                        printf("Movimento %d: Direita\n", i);
                        break;
                    case 4:
                        printf("Movimento %d: Esquerda\n", i);
                        break;
                    case 5:
                        printf("Movimento %d: Cima, Direita\n", i);
                        break;
                    case 6:
                        printf("Movimento %d: Cima, Esquerda\n", i);
                        break;
                    case 7:
                        printf("Movimento %d: Baixo, Direita\n", i);
                        break;
                    case 8:
                        printf("Movimento %d: Baixo, Esquerda\n", i);
                        break;
                }
            }
            break;

        default:
            printf("ENTRADA INVÁLIDA, FAVOR DIGITE CORRETAMENTE!\n");
            break;
    }

    return 0;
}