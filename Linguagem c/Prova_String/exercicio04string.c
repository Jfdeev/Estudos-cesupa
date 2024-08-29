#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador = 0;
	char frase[1000];
	int dentro_da_palavra = 0;
	int i;
	
	puts("Digite uma frase");
	fgets(frase, sizeof(frase), stdin);
	fflush(stdin);
	
	for(i = 0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
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
