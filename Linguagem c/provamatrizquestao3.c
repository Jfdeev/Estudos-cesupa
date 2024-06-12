#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz[4][4];
	int i, j;
	int maior[4] = {0,0,0,0};
	
	//preenchendo a matriz
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("digite um numero de 1 ate 9: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	
	//percorre a matriz para achar o maior elemento e atribui a variavel maior
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			// se a linha for par
			if(i % 2 == 0){
				// procure o maior impar
				if(matriz[i][j] % 2 != 0 && matriz[i][j] > maior[i]){
					maior[i] = matriz[i][j];
				}
			}
			// caso o contrario
			else{
				//procure o maior par
				if(matriz[i][j] % 2 == 0 && matriz[i][j] > maior[i]){
					maior[i] = matriz[i][j];
				}
			}
		}
	}
	
	for(i=0;i<4;i++){
		 printf("%d", maior[i]);
		 printf("\n");
	}
	
	return 0;
}
