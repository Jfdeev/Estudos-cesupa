#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int escolha;
    int penalti_contador_player = 0;
    int penalti_contador_maquina = 0;
    int diferenca = 0;

    printf("Bem vindo ao jogo de penalidades maximas\nDigite\n(1) Para jogar contra a maquina\n(2) Para jogar contra seu amigo\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        int ordem;

        system("cls");

        printf("Agora sera realizado o sorteio para a ordem de batida dos penaltis\n");
        printf("Pressione qualquer botao para realizar o sorteio\n.");
        getch();

        srand(time(NULL));

        ordem = rand() % 2;

        if (ordem == 0) {
            int penalti_batida_player;
            int penalti_batida_maquina;
            int penalti = 1;
            int goleiro;
            system("cls");
            printf("O usuario ira comecar batendo os penaltis\n");

            for (penalti = 1; penalti <= 5 && diferenca <= 3 && penalti_contador_player < 5 && penalti_contador_maquina < 5; penalti++) {
                int flag_defesa = 0;

                // Jogador bate o penalti
                printf("Escolha onde voce deseja bater o penalti\n(1)Canto superior esquerdo\n(2)Canto inferior esquerdo\n(3)Centro\n(4)Canto superior direito\n(5)Canto inferior direito: \n");
                scanf("%d", &penalti_batida_player);

                penalti_batida_maquina = rand() % 5 + 1;
                if (penalti_batida_player == penalti_batida_maquina) {
                    printf("INCRIVEL!!!, o goleiro pegou!!\n");
                    printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_player, penalti_batida_maquina);
                } else {
                    printf("GOOOOOOOOLLLLLLL!!!!, o usuario converteu a cobranca!!\n");
                    printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_player, penalti_batida_maquina);
                    penalti_contador_player++;
                }
                printf("Pressione qualquer botao para continuar.\n");
                getch();
                system("cls");

                flag_defesa = 1;

                // Jogador defende o penalti
                if (flag_defesa == 1) {
                    printf("Escolha onde voce deseja defender o penalti\n(1)Canto superior esquerdo\n(2)Canto inferior esquerdo\n(3)Centro\n(4)Canto superior direito\n(5)Canto inferior direito: \n");
                    scanf("%d", &goleiro);

                    penalti_batida_maquina = rand() % 5 + 1;
                    if (goleiro == penalti_batida_maquina) {
                        printf("INCRIVEL!!!, o goleiro pegou!!\n");
                        printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_maquina, goleiro);
                    } else {
                        printf("GOOOOOOOOLLLLLLL!!!!, a maquina converteu a cobranca!!\n");
                        printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_maquina, goleiro);
                        penalti_contador_maquina++;
                    }
                    printf("Pressione qualquer botao para continuar.\n");
                    getch();
                    system("cls");
                }
				printf("Penalti %d\n", penalti);
                diferenca = abs(penalti_contador_player - penalti_contador_maquina);
                printf("Placar: \nUsuario %d\nMaquina %d\n", penalti_contador_player, penalti_contador_maquina);
            }
        }

        if (ordem == 1) {
            int penalti_batida_player;
            int penalti_batida_maquina;
            int penalti;
            int goleiro;
            system("cls");
            printf("A maquina ira comecar batendo os penaltis\n");

            for (penalti = 0; penalti < 10 && diferenca <= 3 && penalti_contador_player < 5 && penalti_contador_maquina < 5; penalti++) {
                int flag_defesa = 0;
                

                // Maquina bate o penalti
                printf("A maquina esta batendo o penalti...\n");
                penalti_batida_maquina = rand() % 4 + 1;
                printf("Escolha onde voce deseja defender o penalti\n(1)Canto superior esquerdo\n(2)Canto inferior esquerdo\n(3)Centro\n(4)Canto superior direito\n(5)Canto inferior direito: \n");
                scanf("%d", &goleiro);
                

                if (goleiro == penalti_batida_maquina) {
                    printf("INCRIVEL!!!, o goleiro pegou!!\n");
                    printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_maquina, goleiro);
                } else {
                    printf("GOOOOOOOOLLLLLLL!!!!, a maquina converteu a cobranca!!\n");
                    printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_maquina, goleiro);
                    penalti_contador_maquina++;
                }
                printf("Pressione qualquer botao para continuar.\n");
                getch();
                system("cls");

                flag_defesa = 1;

                // Jogador bate o penalti
                if (flag_defesa == 1) {
                    printf("Escolha onde voce deseja bater o penalti\n(1)Canto superior esquerdo\n(2)Canto inferior esquerdo\n(3)Centro\n(4)Canto superior direito\n(5)Canto inferior direito: \n");
                    scanf("%d", &penalti_batida_player);

                    penalti_batida_maquina = rand() % 5 + 1;
                    if (penalti_batida_player == penalti_batida_maquina) {
                        printf("INCRIVEL!!!, o goleiro pegou!!\n");
                        printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_player, penalti_batida_maquina);
                    } else {
                        printf("GOOOOOOOOLLLLLLL!!!!, o usuario converteu a cobranca!!\n");
                        printf("A cobranca foi batida no %d e o goleito pulou no %d\n", penalti_batida_player, penalti_batida_maquina);
                        penalti_contador_player++;
                    }
                    printf("Pressione qualquer botao para continuar.\n");
                    getch();
                    system("cls");
                }
				printf("Penalti %d\n", penalti);
                diferenca = abs(penalti_contador_player - penalti_contador_maquina);
                printf("Placar: \nUsuario %d\nMaquina %d\n", penalti_contador_player, penalti_contador_maquina);
            }
        }
        
    }
    return 0;
}
