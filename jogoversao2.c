#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


// Variaveis para controlar se o jogador possui as chaves
int chave1_obtida = 0; // Inicialmente o jogador nao possui a chave 1
int chave2_obtida = 0; // Inicialmente o jogador nao possui a chave 2
int chave3_obtida = 0; // Inicialmente o jogador nao possui a chave 3

//Voids
void tutorial();
void jogar();
void fase2();
//Menu Inicial
void menu(){
    int menu1;
    	printf("Menu Principal\n(1) Jogar\n(2) Tutorial\n(3) Sair\n");
    	scanf("%d", &menu1);
        if(menu1 == 1){
            jogar();
        }
        else if(menu1 == 2){
            tutorial();
        }
        else if(menu1 == 3){
            system("cls");
            printf("Deseja sair do jogo? (S/N): ");
                char resposta;
                scanf(" %c", &resposta);
                if(resposta == 'S' || resposta == 's') {
                    printf("Voce saiu do jogo.\n");
                    system("cls");
                    exit(0);
                }
                if(resposta == 'n' || resposta == 'N'){
                    return menu();
                }
            exit(0);
        }
        else{
            system("cls");
            printf("Opcao invalida. Tente novamente!\n");
            getch();
            system("cls");
        }
    }
//Tutorial
void tutorial(){
    system("cls");
    printf("Bem vindo aventureiro, aqui voce tera uma nocaoo basica do jogo\nW -> Mover para cima\nA -> Mover para esquerda\nS -> Mover para baixo\nD -> Mover para direita\nI -> Para interagir com objeto que esta encima\nOs monstros sao representados por X e V, caso voce toque neles a fase é reniciada\n& -> Simbolo que representa o jogador.\nAo chegar na porta final po uma questao de algoritimo voce tera que dar um duplo clique no i para passar de fase, nas proximas fases isso sera corrrigido ou continuara do jeiro q esta, lembrando que voce tera que realizar o duplo clique em frente da porta = para abri-la e passar de fase.");
            printf("\nPressione qualquer tecla para voltar ao menu!");
            getch();
            system("cls");
            return menu();
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
                else if (i == 3 && (j > 0 && j < 4)){
                    mapa1[i][j] = '*';
                }
                else if ((i == 6 && (j > 0 && j < 4)) || (i == 6 && (j > 5 && i < 10))){
                    mapa1[i][j] = '*';
                }
                else if(j == 3 && i < 4){
                    mapa1[i][j] = '*';
                }
                else if(j == 3 && i > 5){
                    mapa1[i][j] = '*';
                }
                else if(j == 6 && (i > 5 && i <= 9)){
                    mapa1[i][j] = '*';
                }
                //Espacos Vazios
                else if (i > 0 && i < 9){
                    mapa1[i][j] = ' ';
                }
            }
        }
        
        
        //Posicao inicial do jogador
        int x = 1, y = 8;
        //Posicao inicial do monstro
        int xm = 5, ym = 4;
        //Colocar os elementos no mapa
        char chave1 = '@', chave2 = '@', chave3 = '@', porta1 = 'D', porta2 = 'D', porta3 = 'D';
        char monstro = 'X';
        mapa1[xm][ym] = monstro;
        mapa1[1][3] = porta1;
        mapa1[8][8] = chave1;
        mapa1[6][2] = porta2;
        mapa1[2][1] = chave2;
        mapa1[6][7] = '=';
        mapa1[x][y] = '&';
        mapa1[9][1] = porta3;
        mapa1[8][2] = chave3;
 
        while(1){
            for(i = 0; i < 10; i ++){
                for(j = 0; j < 10; j ++){
                    printf("%c ", mapa1[i][j]);
                }
                printf("\n");
            }
            // Monstro nivel 1
            srand(time(NULL));
            mapa1[xm][ym] = monstro;
            int o;
            o = rand()%4;
            if(o == 0){
                if(mapa1[xm - 1][ym] != '*' && mapa1[xm - 1][ym] != 'D' && mapa1[xm - 1][ym] != '=' && mapa1[xm - 1][ym] != 'h'){
                    xm--;
                    mapa1[xm + 1][ym] = ' ';
                }
            }
            if(o == 1){
                if(mapa1[xm + 1][ym] != '*' && mapa1[xm + 1][ym] != 'D' && mapa1[xm + 1][ym] != '=' && mapa1[xm + 1][ym] != 'h'){
                    xm++;
                    mapa1[xm - 1][ym] = ' ';
                }
            }
            if(o == 2){
                if(mapa1[xm][ym - 1] != '*' && mapa1[xm][ym - 1] != 'D' && mapa1[xm][ym - 1] != '=' && mapa1[xm][ym - 1] != 'h'){
                    ym--;
                    mapa1[xm][ym + 1] = ' ';
                }
            }
            if(o == 3){
                if(mapa1[xm][ym + 1] != '*' && mapa1[xm][ym + 1] != 'D' && mapa1[xm][ym + 1] != '=' && mapa1[xm][ym + 1] != 'h'){
                    ym++;
                    mapa1[xm][ym - 1] = ' ';
                }
            }
            printf("\n\nPressione 'q' para sair.\n");
            int mov = getch();
            //Movimentacao do jogador
            if(mov == 'w'){
                if(mapa1[x-1][y] != '*'){
                    if(((mapa1[x-1][y] == porta1) && (chave1_obtida == 0)) ||
                       ((mapa1[x-1][y] == porta2) && (chave2_obtida == 0)) || 
                       ((mapa1[x-1][y] == porta3) && (chave3_obtida == 0))) {
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if (((mapa1[x-1][y] == porta1) && (chave1_obtida == 1)) ||
                             ((mapa1[x-1][y] == porta2) && (chave2_obtida == 1)) ||
                             ((mapa1[x-1][y] == porta3) && (chave3_obtida == 1))) {
                        x--;
                        mapa1[x+1][y] = ' ';
                    }
                    else if((mapa1[x][y] == mapa1[1][3]) || (mapa1[x][y] == mapa1[6][2]) ||(mapa1[x][y] == mapa1[9][1]) || (mapa1[x][y] == mapa1[6][7])){
                        x--;
                        mapa1[x+1][y] = '=';
                    }
                    else{
                        x--;
                        mapa1[x+1][y] = ' ';
                    }
                    if((((mapa1[x+1][y] == mapa1[8][8]) && chave1_obtida == 0) || ((mapa1[x+1][y] == mapa1[2][1]) && chave2_obtida == 0) || ((mapa1[x+1][y] == mapa1[8][2]) && chave3_obtida == 0)) ){
                        mapa1[x+1][y] = '@';
                    }
                    
                }
                system("cls");
            }
            else if(mov == 's'){
                if(mapa1[x+1][y] != '*'){
                    if (((mapa1[x+1][y] == porta1) && (chave1_obtida == 0)) || 
                        ((mapa1[x+1][y] == porta2) && (chave2_obtida == 0)) || 
                        ((mapa1[x+1][y] == porta3) && (chave3_obtida == 0))){
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if(((mapa1[x+1][y] == porta1) && (chave1_obtida == 1)) ||
                            ((mapa1[x+1][y] == porta2) && (chave2_obtida == 1)) ||
                            ((mapa1[x+1][y] == porta3) && (chave3_obtida == 1))){
                        x++;
                        mapa1[x-1][y] = ' ';
                    }
                    else if((mapa1[x][y] == mapa1[1][3]) || (mapa1[x][y] == mapa1[6][2]) ||(mapa1[x][y] == mapa1[9][1]) || (mapa1[x][y] == mapa1[6][7])){
                        x++;
                        mapa1[x-1][y] = '=';
                    }
                    else{
                        x++;
                        mapa1[x-1][y] = ' ';
                    }
                    if((((mapa1[x-1][y] == mapa1[8][8]) && chave1_obtida == 0) || ((mapa1[x-1][y] == mapa1[2][1]) && chave2_obtida == 0) || ((mapa1[x-1][y] == mapa1[8][2]) && chave3_obtida == 0)) ){
                        mapa1[x-1][y] = '@';
                    }
                    
                }
                system("cls");  
            }
            else if(mov == 'a'){
                if (mapa1[x][y-1] != '*'){
                    if (((mapa1[x][y-1] == porta1) && (chave1_obtida == 0)) || 
                        ((mapa1[x][y-1] == porta2) && (chave2_obtida == 0)) || 
                        ((mapa1[x][y-1] == porta3) && (chave3_obtida == 0))){
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if(((mapa1[x][y-1] == porta1) && (chave1_obtida == 1)) || 
                            ((mapa1[x][y-1] == porta2) && (chave2_obtida == 1)) || 
                            ((mapa1[x][y-1] == porta3) && (chave3_obtida == 1))){
                        y--;
                        mapa1[x][y+1] = ' ';
                    }
                    else if((mapa1[x][y] == mapa1[1][3]) || (mapa1[x][y] == mapa1[6][2]) ||(mapa1[x][y] == mapa1[9][1]) || (mapa1[x][y] == mapa1[6][7])){
                        y--;
                        mapa1[x][y+1] = '=';
                    }
                    else{
                        y--;
                        mapa1[x][y+1] = ' ';
                    }
                    if((((mapa1[x][y+1] == mapa1[8][8]) && chave1_obtida == 0) || ((mapa1[x][y+1] == mapa1[2][1]) && chave2_obtida == 0) || ((mapa1[x][y+1] == mapa1[8][2]) && chave3_obtida == 0)) ){
                        mapa1[x][y+1] = '@';
                    }
                    
                }
                system("cls");
            }  
            else if(mov == 'd'){
                if(mapa1[x][y+1] != '*'){
                    if (((mapa1[x][y+1] == porta1) && (chave1_obtida == 0)) || 
                        ((mapa1[x][y+1] == porta2) && (chave2_obtida == 0)) || 
                        ((mapa1[x][y+1] == porta3) && (chave3_obtida == 0))){
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if(((mapa1[x][y+1] == porta1) && (chave1_obtida == 1)) || 
                            ((mapa1[x][y+1] == porta2) && (chave2_obtida == 1)) || 
                            ((mapa1[x][y+1] == porta3) && (chave3_obtida == 1))){
                        y++;
                        mapa1[x][y-1] = ' ';
                    }
                    else if((mapa1[x][y] == mapa1[1][3]) || (mapa1[x][y] == mapa1[6][2]) ||(mapa1[x][y] == mapa1[9][1]) || (mapa1[x][y] == mapa1[6][7])){
                        y++;
                        mapa1[x][y-1] = '=';
                    }
                    else{
                        y++;
                        mapa1[x][y-1] = ' ';    
                    }
                    if((((mapa1[x][y-1] == mapa1[8][8]) && chave1_obtida == 0) || ((mapa1[x][y-1] == mapa1[2][1]) && chave2_obtida == 0) || ((mapa1[x][y-1] == mapa1[8][2]) && chave3_obtida == 0)) ){
                        mapa1[x][y-1] = '@';
                    }
                    
                }
                system("cls");
            }
            if (x == xm && y == ym){
        		printf("Voce foi pego pelo monstro!\n");
        		printf("Pressione qualquer tecla para continuar...\n");
        		getch();
        		system("cls");
        		return jogar();
    		}
            else if(mov == 'q'){
                printf("Deseja sair do jogo? (S/N): ");
                char resposta;
                scanf(" %c", &resposta);
                if(resposta == 'S' || resposta == 's') {
                    printf("Voce saiu do jogo.\n");
                    printf("Pressione qualquer tecla para voltar ao menu.\n");
                    getch();
                    system("cls");
                    return menu();
                }
                else{
                    system("cls");
                }
            }
            else if(mov == 'i' && (x == 8 && y == 8)){
                mapa1[8][8] = ' ';
                mapa1[1][3] = '=';
                chave1_obtida = 1;
                system("cls");
            }
            else if(mov == 'i' && (x == 2 && y == 1)){
                mapa1[2][1] = ' ';
                mapa1[6][2] = '=';
                chave2_obtida = 1;
                system("cls");
            }
            else if(mov == 'i' && (x == 8 && y == 2)){
                mapa1[8][2] = ' ';
                mapa1[9][1] = '=';
                chave3_obtida = 1;
                system("cls");
            }
            if(mov == 'i' && (mapa1[x][y] == mapa1[9][1])){
                return fase2();
            }
            else{
                system("cls");
            }
                mapa1[x][y] = '&';
                mapa1[xm][ym] = monstro;
        }
    }
void fase2(){
	int i, j;
    system("cls");
    printf("Segunda Fase.\n");
    char mapa2[20][20];
        for(i = 0; i < 20; i++){
            for(j = 0; j < 20; j++){
                //Paredes externas
                if(i == 0 || i == 19){
                    mapa2[i][j] = '*';
                }
                else if (j == 0 || j == 19){
                    mapa2[i][j] = '*';
                }
                //Espacos Vazios
                else if (i > 0 && i < 19){
                    mapa2[i][j] = ' ';
                }
			  }
            }
            //Posicao inicial do jogador
        int x = 8, y = 8;
        //Posicao inicial do monstro
        int xm = 5, ym = 4;
        //elemantos
        char chave1 = '@', chave2 = '@', chave3 = '@', porta1 = 'D', porta2 = 'D', porta3 = 'D';
        char monstro = 'X';
        mapa2[xm][ym] = monstro;
        mapa2[x][y] = '&';
        
        while(1){
            for(i = 0; i < 10; i ++){
                for(j = 0; j < 10; j ++){
                    printf("%c ", mapa2[i][j]);
                }
                printf("\n");
            }
            // Monstro nivel 1
            srand(time(NULL));
            mapa2[xm][ym] = monstro;
            int o;
            o = rand()%4;
            if(o == 0){
                if(mapa2[xm - 1][ym] != '*' && mapa2[xm - 1][ym] != 'D' && mapa2[xm - 1][ym] != '=' && mapa2[xm - 1][ym] != 'h'){
                    xm--;
                    mapa2[xm + 1][ym] = ' ';
                }
            }
            if(o == 1){
                if(mapa2[xm + 1][ym] != '*' && mapa2[xm + 1][ym] != 'D' && mapa2[xm + 1][ym] != '=' && mapa2[xm + 1][ym] != 'h'){
                    xm++;
                    mapa2[xm - 1][ym] = ' ';
                }
            }
            if(o == 2){
                if(mapa2[xm][ym - 1] != '*' && mapa2[xm][ym - 1] != 'D' && mapa2[xm][ym - 1] != '=' && mapa2[xm][ym - 1] != 'h'){
                    ym--;
                    mapa2[xm][ym + 1] = ' ';
                }
            }
            if(o == 3){
                if(mapa2[xm][ym + 1] != '*' && mapa2[xm][ym + 1] != 'D' && mapa2[xm][ym + 1] != '=' && mapa2[xm][ym + 1] != 'h'){
                    ym++;
                    mapa2[xm][ym - 1] = ' ';
                }
            }
            printf("\n\nPressione 'q' para sair.\n");
            int mov = getch();
            //Movimentacao do jogador
            if(mov == 'w'){
                if(mapa2[x-1][y] != '*'){
                    if(((mapa2[x-1][y] == porta1) && (chave1_obtida == 0)) ||
                       ((mapa2[x-1][y] == porta2) && (chave2_obtida == 0)) || 
                       ((mapa2[x-1][y] == porta3) && (chave3_obtida == 0))) {
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if (((mapa2[x-1][y] == porta1) && (chave1_obtida == 1)) ||
                             ((mapa2[x-1][y] == porta2) && (chave2_obtida == 1)) ||
                             ((mapa2[x-1][y] == porta3) && (chave3_obtida == 1))) {
                        x--;
                        mapa2[x+1][y] = ' ';
                    }
                    else if((mapa2[x][y] == mapa2[1][3]) || (mapa2[x][y] == mapa2[6][2]) ||(mapa2[x][y] == mapa2[9][1]) || (mapa2[x][y] == mapa2[6][7])){
                        x--;
                        mapa2[x+1][y] = '=';
                    }
                    else{
                        x--;
                        mapa2[x+1][y] = ' ';
                    }
                    if((((mapa2[x+1][y] == mapa2[8][8]) && chave1_obtida == 0) || ((mapa2[x+1][y] == mapa2[2][1]) && chave2_obtida == 0) || ((mapa2[x+1][y] == mapa2[8][2]) && chave3_obtida == 0)) ){
                        mapa2[x+1][y] = '@';
                    }
                    
                }
                system("cls");
            }
            else if(mov == 's'){
                if(mapa2[x+1][y] != '*'){
                    if (((mapa2[x+1][y] == porta1) && (chave1_obtida == 0)) || 
                        ((mapa2[x+1][y] == porta2) && (chave2_obtida == 0)) || 
                        ((mapa2[x+1][y] == porta3) && (chave3_obtida == 0))){
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if(((mapa2[x+1][y] == porta1) && (chave1_obtida == 1)) ||
                            ((mapa2[x+1][y] == porta2) && (chave2_obtida == 1)) ||
                            ((mapa2[x+1][y] == porta3) && (chave3_obtida == 1))){
                        x++;
                        mapa2[x-1][y] = ' ';
                    }
                    else if((mapa2[x][y] == mapa2[1][3]) || (mapa2[x][y] == mapa2[6][2]) ||(mapa2[x][y] == mapa2[9][1]) || (mapa2[x][y] == mapa2[6][7])){
                        x++;
                        mapa2[x-1][y] = '=';
                    }
                    else{
                        x++;
                        mapa2[x-1][y] = ' ';
                    }
                    if((((mapa2[x-1][y] == mapa2[8][8]) && chave1_obtida == 0) || ((mapa2[x-1][y] == mapa2[2][1]) && chave2_obtida == 0) || ((mapa2[x-1][y] == mapa2[8][2]) && chave3_obtida == 0)) ){
                        mapa2[x-1][y] = '@';
                    }
                    
                }
                system("cls");  
            }
            else if(mov == 'a'){
                if (mapa2[x][y-1] != '*'){
                    if (((mapa2[x][y-1] == porta1) && (chave1_obtida == 0)) || 
                        ((mapa2[x][y-1] == porta2) && (chave2_obtida == 0)) || 
                        ((mapa2[x][y-1] == porta3) && (chave3_obtida == 0))){
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if(((mapa2[x][y-1] == porta1) && (chave1_obtida == 1)) || 
                            ((mapa2[x][y-1] == porta2) && (chave2_obtida == 1)) || 
                            ((mapa2[x][y-1] == porta3) && (chave3_obtida == 1))){
                        y--;
                        mapa2[x][y+1] = ' ';
                    }
                    else if((mapa2[x][y] == mapa2[1][3]) || (mapa2[x][y] == mapa2[6][2]) ||(mapa2[x][y] == mapa2[9][1]) || (mapa2[x][y] == mapa2[6][7])){
                        y--;
                        mapa2[x][y+1] = '=';
                    }
                    else{
                        y--;
                        mapa2[x][y+1] = ' ';
                    }
                    if((((mapa2[x][y+1] == mapa2[8][8]) && chave1_obtida == 0) || ((mapa2[x][y+1] == mapa2[2][1]) && chave2_obtida == 0) || ((mapa2[x][y+1] == mapa2[8][2]) && chave3_obtida == 0)) ){
                        mapa2[x][y+1] = '@';
                    }
                    
                }
                system("cls");
            }  
            else if(mov == 'd'){
                if(mapa2[x][y+1] != '*'){
                    if (((mapa2[x][y+1] == porta1) && (chave1_obtida == 0)) || 
                        ((mapa2[x][y+1] == porta2) && (chave2_obtida == 0)) || 
                        ((mapa2[x][y+1] == porta3) && (chave3_obtida == 0))){
                        printf("A porta esta trancada, ache a chave respectiva para ela");
                    }
                    else if(((mapa2[x][y+1] == porta1) && (chave1_obtida == 1)) || 
                            ((mapa2[x][y+1] == porta2) && (chave2_obtida == 1)) || 
                            ((mapa2[x][y+1] == porta3) && (chave3_obtida == 1))){
                        y++;
                        mapa2[x][y-1] = ' ';
                    }
                    else if((mapa2[x][y] == mapa2[1][3]) || (mapa2[x][y] == mapa2[6][2]) ||(mapa2[x][y] == mapa2[9][1]) || (mapa2[x][y] == mapa2[6][7])){
                        y++;
                        mapa2[x][y-1] = '=';
                    }
                    else{
                        y++;
                        mapa2[x][y-1] = ' ';    
                    }
                    if((((mapa2[x][y-1] == mapa2[8][8]) && chave1_obtida == 0) || ((mapa2[x][y-1] == mapa2[2][1]) && chave2_obtida == 0) || ((mapa2[x][y-1] == mapa2[8][2]) && chave3_obtida == 0)) ){
                        mapa2[x][y-1] = '@';
                    }
                    
                }
                system("cls");
            }
            if (x == xm && y == ym){
        		printf("Voce foi pego pelo monstro!\n");
        		printf("Pressione qualquer tecla para continuar...\n");
        		getch();
        		system("cls");
        		return fase2();
    		}
            else if(mov == 'q'){
                printf("Deseja sair do jogo? (S/N): ");
                char resposta;
                scanf(" %c", &resposta);
                if(resposta == 'S' || resposta == 's') {
                    printf("Voce saiu do jogo.\n");
                    printf("Pressione qualquer tecla para voltar ao menu.\n");
                    getch();
                    system("cls");
                    return menu();
                }
                else{
                    system("cls");
                }
            }
            else if(mov == 'i' && (x == 8 && y == 8)){
                mapa2[8][8] = ' ';
                mapa2[1][3] = '=';
                chave1_obtida = 1;
                system("cls");
            }
            else if(mov == 'i' && (x == 2 && y == 1)){
                mapa2[2][1] = ' ';
                mapa2[6][2] = '=';
                chave2_obtida = 1;
                system("cls");
            }
            else if(mov == 'i' && (x == 8 && y == 2)){
                mapa2[8][2] = ' ';
                mapa2[9][1] = '=';
                chave3_obtida = 1;
                system("cls");
            }
            if(mov == 'i' && (mapa2[x][y] == mapa2[9][1])){
                return fase2();
            }
            else{
                system("cls");
            }
                mapa2[x][y] = '&';
                mapa2[xm][ym] = monstro;  
      
	   }
   }

void fase3(){
    exit(0);
}
int main() {
    menu();
    return 0;
}
