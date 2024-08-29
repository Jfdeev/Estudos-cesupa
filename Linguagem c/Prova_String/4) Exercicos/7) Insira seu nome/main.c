#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// aqui vamos aprender basico
	// usuario botar seu nome
	
	char nome[100];
	
	printf("Digite seu nome: ");
	//scanf("%[^\n]", nome);
	//gets(nome);
	fgets(nome,100,stdin);
	
	printf("%s", nome);
	
	return 0;
}
