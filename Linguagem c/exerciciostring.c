#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char stringA[30];
	char maior[30];
	char inverso[30];
	int contador;
	int tamanho;
	int i, j;
	int dentro_da_palavra;
	
	puts("Digite algo: ");
	fgets(stringA, sizeof(stringA), stdin);
	fflush(stdin);
	tamanho = strlen(stringA);
	
	for(i = 0; stringA[i] != '\0'; i++){
		if(stringA[i] == ' '){
			if(dentro_da_palavra == 1){
				contador++;
				dentro_da_palavra = 0;
			}
		}else{
			dentro_da_palavra = 1;
		}
	}
	if(dentro_da_palavra == 1){
		contador++;
	}
	printf("O total de palavras sao %d", contador);
	
	return 0;
}
	
