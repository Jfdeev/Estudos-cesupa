#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palavra[100];
	
	printf("Digite uma frase: ");
	fgets(palavra, sizeof(palavra),stdin);
	
	strlwr(palavra);
	
	printf("Minusculo: %s\n", palavra);
	
	
	return 0;
}
