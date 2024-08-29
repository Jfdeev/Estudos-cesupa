#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char escrita1[100];
	char escrita2[100];
	
	printf("Informe primeira frase: ");
	scanf("%s", escrita1);
	
	printf("Informe primeira frase: ");
	scanf("%s", escrita2);
	
	printf("AS frases juntas: %s %s\n", escrita1, escrita2);
	
	
	return 0;
}
