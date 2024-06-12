#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz[3][3];
	int i ,j;
	int linhas[3] = {0,0,0};
	int colunas[3] = {0,0,0};
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite um numero: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	// Exibindo a matriz preenchida
    printf("Matriz preenchida:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
	return 0;
}
