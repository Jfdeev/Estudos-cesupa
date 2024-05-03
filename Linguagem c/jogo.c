#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define LINHAS 10
#define COLUNAS 10

int main() {
    char mapa[LINHAS][COLUNAS];
    int i, j;
    int jogador_linha = 1; // Posição inicial do jogador
    int jogador_coluna = 1;
    char menu;
    int a;
    int chave;
    
   
    for(a=0;a<=1;a){
    	printf("Menu Principal\n(1) Jogar\n(2) Tutorial\n(3) Sair\n");
    	scanf("%c", &menu);
    	if(menu=='1'){
    // Inicializa o mapa com espaços em branco
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            mapa[i][j] = ' ';
        }
    }

    // Coloca as paredes no mapa
    for (i = 0; i < LINHAS; i++) {
        mapa[i][0] = '*';               // Parede à esquerda
        mapa[i][COLUNAS - 1] = '*';     // Parede à direita
    }
    for (j = 0; j < COLUNAS; j++) {
        mapa[0][j] = '*';               // Parede superior
        mapa[LINHAS - 1][j] = '*';      // Parede inferior
    }

    // Coloca o jogador na posição inicial
    mapa[jogador_linha][jogador_coluna] = '&';

    // Imprime o mapa
    printf("Mapa:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%c ", mapa[i][j]);
            mapa[6][1] = '*';
            mapa[6][2] = '*';
            mapa[6][3] = '*';
            mapa[7][3] = '*';
            mapa[3][7] = '*';
            mapa[3][8] = '*';
            mapa[3][9] = '*';
            mapa[2][7] = '*';
            mapa[7][1] = '@';
            mapa[2][9] = 'D';
            
            

            
            
        }
        printf("\n");
    }
	
    // Movimentação do jogador
    char movimento;
    while (1) {
        movimento = getch();

        // Atualiza a posição do jogador de acordo com o movimento
        switch (movimento) {
            case 'w': // cima
                if (jogador_linha > 1 && mapa[jogador_linha - 1][jogador_coluna] != '*') {
                    mapa[jogador_linha][jogador_coluna] = ' ';
                    jogador_linha--;
                }
                break;
            case 's': // baixo
                if (jogador_linha < LINHAS - 2 && mapa[jogador_linha + 1][jogador_coluna] != '*') {
                    mapa[jogador_linha][jogador_coluna] = ' ';
                    jogador_linha++;
                }
                break;
            case 'a': // esquerda
                if (jogador_coluna > 1 && mapa[jogador_linha][jogador_coluna - 1] != '*') {
                    mapa[jogador_linha][jogador_coluna] = ' ';
                    jogador_coluna--;
                }
                break;
            case 'd': // direita
                if (jogador_coluna < COLUNAS - 2 && mapa[jogador_linha][jogador_coluna + 1] != '*') {
                    mapa[jogador_linha][jogador_coluna] = ' ';
                    jogador_coluna++;
                }
            break;
            default:
                printf("Movimento inválido. Tente novamente.\n");
        }

        // Coloca o jogador na nova posição
        mapa[jogador_linha][jogador_coluna] = '&';

        // Limpa a tela
        system("cls");

        // Imprime o mapa atualizado
        printf("Mapa:\n");
        for (i = 0; i < LINHAS; i++) {
            for (j = 0; j < COLUNAS; j++) {
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }
    
    }
    } else if(menu=='2'){
    	    printf("Bem vindo aventureiro, aqui voce tera uma nocaoo basica do jogo\nW -> Mover para cima\nA -> Mover para esquerda\nS -> Mover para baixo\nD -> Mover para direita\nI -> Para interagir com objeto que esta encima\nOs monstros sao representados por X e V, caso voce toque neles a fase é reniciada\n& -> Simbolo que representa o jogador.");
            printf("\nPressione qualquer tecla para voltar ao menu!");
            getch();
            system("cls");
	    }
	    else if(menu=='3'){
		    printf("Obrigado por jogar!");
		break;
	}

}
    return 0;
}