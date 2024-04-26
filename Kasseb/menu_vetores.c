#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO_VETOR 10



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char menu;
	int i, j;
	int vetor[10];
	int rn;
	int linha, coluna;
	char menu_principal;
	char menu_c;
	
	for(j=0;j<1;j){
	printf("\nBem vindo ao menu da ativadade!\n(a)Imprimir o vetor completo em formato de grid\n(b)Gerar Aleatoriamente\n(c)Alterar Valor\n(d)Sair do programa\n");
	scanf("%c", &menu);
	if(menu=='a'){
		for(i=0;i<9;i++){
			printf("Digite os valores do vetor: ");
			scanf("%d", &vetor[i]);
		}
		printf("%d %d %d\n%d %d %d\n%d %d %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], vetor[7], vetor[8]);
	}
	else if(menu=='b'){
		int n;
		int vetor[0];
		srand(time(NULL));
		printf("Digite o valor de n: ");
		scanf("%d", &n);
		for(i=0;i<n;i++){
			vetor[i] = rand() % n;
			printf("%d\n", vetor[i]);
		}
	}
	else if(menu=='c'){
		printf("Dentro de Alterar valor>>>\n\nEscolha uma das opcoes...\n(i) Adicionar um valor no vetor\n(j) Remover valor de um vetor.\n");
		scanf("%s", &menu_c);
		system("cls");

		switch(menu_c) {
				int vetor[TAMANHO_VETOR] = {0}; 
				int posicao, valor, opcao;

			case 'i':
				printf("Dentro de Adicionar valor no vetor>>>\n\n");
				printf("Informe a posicao (entre 0 e 9): ");
				scanf("%d", &posicao);

				if (posicao < 0 || posicao >= TAMANHO_VETOR) {
					printf("Posicao invalida.\n");
					return 1;
				}

				if (vetor[posicao] != 0) { 
					printf("Posicao esta ocupada: %d\n", vetor[posicao]);
					printf("Deseja substituir? (1) Sim / (2) Não\n");
					int opcao;
					scanf("%d", &opcao);

					if (opcao != 1) { 
						printf("Operacao cancelada.\n");
						return 0;
					}
				}

				
				printf("Informe o valor a ser adicionado: ");
				scanf("%d", &valor);

				if (valor % 2 != 0) { 
					printf("O valor informado nao e par.\n");
					return 1;
				}

				//Informando ao usuario valor eh posicao
				vetor[posicao] = valor;
				printf("Valor %d adicionado com sucesso na posicao %d.\n", valor, posicao);
				break;

			case 'j':
				printf("Dentro de Remover valor de um vetor>>>\n\n");//Informando local ao usuario
				printf("Escolha uma opcao:\n");
				printf("(1) Remover por posicao\n");
				printf("(2) Remover por valor\n");
				scanf("%d", &opcao);
				system("cls");

				switch (opcao) {
					case 1:
						printf("Informe a posicao (entre 0 e 9): ");
						scanf("%d", &posicao);
						if (posicao < 0 || posicao >= TAMANHO_VETOR) {
							printf("Posicao invalida.\n");
							return 1;
						}
						vetor[posicao] = 0;
						printf("Valor removido com sucesso.\n");
						break;
					case 2:
						printf("Informe o valor a ser removido: ");
						scanf("%d", &valor);
						for (i = 0; i < TAMANHO_VETOR; i++) {
							if (vetor[i] == valor) {
								vetor[i] = 0;
								printf("Valor removido na posicao %d.\n", vetor[i]);
							}
						}
						break;
					default:
						printf("Opcao invalida.\n");
						return 1;
				}
		}
	}
		else if(menu=='d'){
			printf("Saindo do programa!");
			j++;
		}
	}
	return 0;
	}


