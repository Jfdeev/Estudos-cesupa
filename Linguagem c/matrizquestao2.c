#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz[100][100];
	int i, j;
	int x, y;
	
	printf("Digite o total de linhas da matriz: ");
	scanf("%d", &x);
	printf("Digite o total de colunas da matriz: ");
	scanf("%d", &y);
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Preencha a matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("matriz normal\n");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
	printf("matriz transposta\n");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf(" %d", matriz[j][i]);
		}
		printf("\n");
	}
	return 0;
}
