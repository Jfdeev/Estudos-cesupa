#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

char labirinto[LINHAS][COLUNAS] = {
    {'#', '#', '#', '#', '#'},
    {'#', ' ', ' ', ' ', '#'},
    {'#', '#', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#'}
};

int posicaoX = 1;
int posicaoY = 1;

void exibirLabirinto() {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (i == posicaoY && j == posicaoX) {
                printf("P ");  // Jogador
            } else {
                printf("%c ", labirinto[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    char comando;

    do {
        exibirLabirinto();

        printf("Digite um comando (w/a/s/d para cima/esquerda/baixo/direita, q para sair): ");
        scanf(" %c", &comando);

        switch (comando) {
            case 'w':
                if (posicaoY > 0 && labirinto[posicaoY - 1][posicaoX] != '#') {
                    posicaoY--;
                }
                break;
            case 'a':
                if (posicaoX > 0 && labirinto[posicaoY][posicaoX - 1] != '#') {
                    posicaoX--;
                }
                break;
            case 's':
                if (posicaoY < LINHAS - 1 && labirinto[posicaoY + 1][posicaoX] != '#') {
                    posicaoY++;
                }
                break;
            case 'd':
                if (posicaoX < COLUNAS - 1 && labirinto[posicaoY][posicaoX + 1] != '#') {
                    posicaoX++;
                }
                break;
        }

    } while (comando != 'q');

    printf("Jogo encerrado.\n");

    return 0;
}
