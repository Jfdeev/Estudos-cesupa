#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char escrever[100];
	int i;
	
	printf("Digite uma frase: ");
	fgets(escrever, 100, stdin);
	
	for(i = 0; escrever[i] != '\0'; i++){
		escrever[i] = toupper(escrever[i]);
	}
	
	printf("Frase maiscula: %s \n", escrever);
	
	return 0;
}
