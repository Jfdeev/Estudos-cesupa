#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//strlen --> Retorna o comprimento de uma string. --> Contar Caracteres em uma String, Inverter String, Checar Pal�ndromo
	//toupper --> Converte um caractere min�sculo para mai�sculo. --> Converter para Mai�sculas.
	//strcmp --> Compara duas strings. Retorna zero se as strings s�o iguais. --> Pode ser �til para compara��es em exerc�cios adicionais, embora n�o seja diretamente usada nos exerc�cios listados
	
	char palavra[100];
	int tamanho;
	
	printf("Digite uma palavra:\n");
	fgets(palavra, sizeof(palavra), stdin);
	fflush(stdin);
	tamanho = strlen(palavra);
	printf("A palavra tem %d caracteres", tamanho);
	
	return 0;
}
