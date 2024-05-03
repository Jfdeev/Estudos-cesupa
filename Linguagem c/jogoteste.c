#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Variáveis globais para controlar o estado do jogo
int chave1_possuida = 0; // 0 significa que a chave não foi pega, 1 significa que foi pega
int chave2_possuida = 0;
int chave3_possuida = 0;
int porta1_aberta = 0; // 0 significa que a porta está fechada, 1 significa que está aberta
int porta2_aberta = 0;
int porta3_aberta = 0;

//Voids
void tutorial();
void jogar();
void sair();

//Menu Inicial
void menu(){
    int menu1;
    do{
        printf("1) Jogar\n2) Tutorial\n3) Sair\n");
        scanf("%d", &menu1);
        if(menu1 == 1){
            jogar();
        }
        else if(menu1 == 2){
            tutorial();
        }
        else if(menu1 == 3){
            sair();
            return;
        }
        else{
            printf("Opcao invalida. Tente novamente!\n");
        }
    }while(menu1 != 3);
}
//Tutorial
void tutorial(){
    printf("Ola, Bravo Aventureiro, Hoje voce ira passar por um nova aventura, que consiste em 3 fases.\nO jogo consiste em pegar a chave '@', e passar pelas portas 'D' e '=', caso a porta seja um '=', quer dizer que a porta esta aberta. A movimentacao consiste em usar 'w' 'a' 's' 'd' e pressionar 'q' para sair.\n");
    printf("Pressione qualquer tecla para voltar ao menu.\n");
    getch();
    system("cls");
}
//Jogo
void jogar(){
    int i, j;
    system("cls");
    //Criar o Mapa
    char mapa1[10][10];
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            //Paredes externas
            if(i == 0 || i == 9){
                mapa1[i][j] = '*';
            }
            else if (j == 0 || j == 9){
                mapa1[i][j] = '*';
            }
            //Parede interna
            else if ((i == 3 && (j > 0 && j < 4)) || (i == 3 && (j > 5 && i < 10))){
                mapa1[i][j] = '*';
            }
            else if (i == 6 && (j > 0 && j < 4)){
                mapa1[i][j] = '*';
            }
            else if(j == 3 && i < 4){
                mapa1[i][j] = '*';
            }
            else if(j == 3 && i > 5){
                mapa1[i][j] = '*';
            }
            else if(j == 6 && i < 4){
                mapa1[i][j] = '*';
            }
            //Espacos Vazios
            else if (i > 0 && i < 9){
                mapa1[i][j] = ' ';
            }
        }
    }
    //Posição inicial do jogador
    int x = 8, y = 8;
    //Colocar os elementos no mapa
    mapa1[1][3] = 'D';
    mapa1[2][1] = '@';
    mapa1[6][2] = 'D';
    mapa1[1][8] = '@';
    mapa1[3][7] = '=';
    mapa1[y][x] = '&';
    mapa1[9][1] = 'D';
    mapa1[8][2] = '@';
    while(1){
        for(i = 0; i < 10; i ++){
            for(j = 0; j < 10; j ++){
                printf("%c ", mapa1[i][j]);
            }
            printf("\n");
        }
        printf("\n\nPressione 'q' para sair.\n");
        int ch = getch();
        //Movimentação do jogador
        if(ch == 'w'){
            if(mapa1[x-1][y] != '*'){
                x--;
                mapa1[x+1][y] = ' ';    
            }
            system("cls");
        }
        else if(ch == 's'){
            if(mapa1[x+1][y] != '*'){
                x++;
                mapa1[x-1][y] = ' ';
            }
            system("cls");    
        }
        else if(ch == 'a'){
            if (mapa1[x][y-1] != '*'){
                y--;
                mapa1[x][y+1] = ' ';
            }
            system("cls");
        }
        else if(ch == 'd'){
            if(mapa1[x][y+1] != '*'){
                y++;
                mapa1[x][y-1] = ' ';
            }
            system("cls");
        }
        else if(ch == 'q'){
            printf("Deseja sair do jogo? (S/N): ");
            char resposta;
            scanf(" %c", &resposta);
            if(resposta == 'S' || resposta == 's') {
                printf("Voce saiu do jogo.\n");
                printf("Pressione qualquer tecla para voltar ao menu.\n");
                getch();
                system("cls");
                return;
            }
        }

        // Verificar se o jogador pegou a chave
        if (mapa1[x][y] == '@') {
            if (!chave1_possuida && (x == 1 && y == 8)) {
                chave1_possuida = 1;
                printf("Voce pegou a chave!\n");
            } else if (!chave2_possuida && (x == 2 && y == 1)) {
                chave2_possuida = 1;
                printf("Voce pegou a chave!\n");
            } else if (!chave3_possuida && (x == 8 && y == 2)) {
                chave3_possuida = 1;
                printf("Voce pegou a chave!\n");
            }
        }

        // Verificar se o jogador tenta abrir uma porta
        if (mapa1[x][y] == 'D') {
            if (chave1_possuida && !porta1_aberta && (x == 1 && y == 3)) {
                porta1_aberta = 1;
                mapa1[1][3] = '=';
                printf("Voce abriu a porta!\n");
            } else if (chave2_possuida && !porta2_aberta && (x == 6 && y == 2)) {
                porta2_aberta = 1;
                mapa1[6][2] = '=';
                printf("Voce abriu a porta!\n");
            } else if (chave3_possuida && !porta3_aberta && (x == 9 && y == 1)) {
                porta3_aberta = 1;
                mapa1[9][1] = '=';
                printf("Voce abriu a porta!\n");
            }
        }
    }
}
void sair(){
    printf("Voce saiu. Por favor volte novamente outra hora.\n");
    exit(0);
}
int main() {
    menu();
    return 0;
}