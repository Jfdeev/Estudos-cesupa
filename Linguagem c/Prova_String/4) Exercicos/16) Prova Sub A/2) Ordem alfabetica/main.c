#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome1[100];
	char nome2[100];
	char nome3[100];
	char temp[100];
	
	printf("Informe seu nome: ");
	fgets(nome1, sizeof(nome1), stdin);
	//remover caracter nova linha
	nome1[strcspn(nome1, "\n")] = '\0';
	
	printf("Informe seu nome: ");
	fgets(nome2, sizeof(nome2), stdin);
	nome2[strcspn(nome2, "\n")] = '\0';
	
	printf("Informe seu nome: ");
	fgets(nome3, sizeof(nome3), stdin);
	nome3[strcspn(nome3, "\n")] = '\0';
	
	if (strcmp(nome1, nome2) > 0){
		strcpy(temp, nome1);
		strcpy(nome1, nome2);
		strcpy(nome2, temp);	
	}
	
	if (strcmp(nome1, nome3) > 0){
		strcpy(temp, nome1);
		strcpy(nome1, nome3);
		strcpy(nome3, temp);	
	}
	
	if (strcmp(nome2, nome3) > 0){
		strcpy(temp, nome2);
		strcpy(nome2, nome3);
		strcpy(nome3, temp);	
	}
	
	printf("Em ordem alfabetica: %s, %s, %s", nome1, nome2, nome3);
	
	
	return 0;
}
