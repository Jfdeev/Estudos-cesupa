#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palavra[100];
	int invertida;
	int i;
	
	puts("Digite uma frase: ");
	fgets(palavra, sizeof(palavra), stdin);
	fflush(stdin);
	
	invertida = strlen(palavra);
	
	printf("A frase invertida e: ");
	
	for(i=invertida; i>= 0; i--){
		printf("%c", palavra[i]);
	}
	return 0;
}
