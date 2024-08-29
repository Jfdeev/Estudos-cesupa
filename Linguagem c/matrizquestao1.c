#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz[3][3];
	int vetor[3] = {0,0,0};
	int i, j;
	int soma;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Preencha a matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		soma = 0;
		for(j=0;j<3;j++){
			soma += matriz[i][j];
		}
		printf("A soma da linha %d e %d\n", i + 1, soma);
	}
	
	for(j=0;j<3;j++){
		soma = 0;
		for(i=0;i<3;i++){
			soma += matriz[i][j];
		}
		printf("A soma da coluna %d e %d\n", i + 1, soma);
	}
	return 0;
}
