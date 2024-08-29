#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char escrever [100];
	
	printf("Escreva uma frase: ");
	fgets(escrever, 100, stdin);
	
	int tamanho = strlen(escrever);
	int i = tamanho -1;
	
	
	for(; i >= 0; i--){
		printf("%c", escrever[i]);
	}
	
	printf("\n");
	
	return 0;
}
