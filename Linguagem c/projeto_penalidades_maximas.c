#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int escolha;
	
	printf("Bem vindo ao jogo de penalidades maximas\n Digite\n(1)Para jogar contra a maquina\n(2)Para jogar contra seu amigo\n");
	scanf("%d", &escolha);
	
	if(escolha==1){
		int cpu;
		int ordem;
		
		system("cls");
		
		printf("Agora sera realizado o sorteio para a ordem de batida dos penaltis\n");
		printf("Pressione qualquer botao para realizar o sorteio\n.");
		getch();
		
		srand(time(NULL));
		
		ordem = rand()%2;
		
		if(ordem==0){
			int penalti_batida_player;
			int penalti_batida_maquina;
			int penalti;
			system("cls");
			printf("O usuario ira comecar batendo os penaltis\n");
			
			for(penalti=0;penalti<5;penalti++){
				int penalti_contador_player;
				int penalti_contador_maquina;
				printf("Escolha onde voce deseja bater o penalti\n(1)Canto superior esquerdo/n(2)Canto inferior esquerdo/n(3)Centro/n(4)Canto superior direito/n(5)Canto inferior direito/n");
				scanf("%d", &penalti_batida_player);
				
				penalti_batida_maquina = rand()%4;
				if(penalti_batida_player==penalti_batida_maquina){
					printf("INCRIVEL!!!, o goleiro pegou!!/n");
					printf("A cobranca foi batida no %d e o goleito pulou no %d/n", penalti_batida_player, penalti_batida_maquina);
				}
				else if(penalti_batida_player!=penalti_batida_maquina){
					printf("GOOOOOOOOLLLLLLL!!!!, o usuario converteu a cobranca!!");
					printf("A cobranca foi batida no %d e o goleito pulou no %d/n", penalti_batida_player, penalti_batida_maquina);
					penalti_contador_player++;
				}
				
			}
		}
		if(ordem==1){
			int penalti_batida_player;
			int penalti_batida_cpu;
			system("cls");
			printf("A maquina ira comecar batendo os panaltis");
		}
	}
	return 0;
}
