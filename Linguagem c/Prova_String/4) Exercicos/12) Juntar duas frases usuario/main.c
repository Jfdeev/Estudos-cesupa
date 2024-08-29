#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char frase1[100];
	char frase2[100];
	
	printf("Informe uma frase: ");
	fgets(frase1, sizeof(frase1), stdin);
	// remover caracter nova linha 
	frase1[strcspn(frase1, "\n")] = '\0';
	
	printf("Informe uma frase: ");
	fgets(frase2, sizeof(frase2), stdin);
	// remover caracter nova linha 
	frase2[strcspn(frase2, "\n")] = '\0';
	
	strcat(frase1, " ");
	strcat(frase1, frase2);
	
	printf("As frases juntas: %s\n", frase1);
	
	
	
	return 0;
}
