#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//strlen --> Retorna o comprimento de uma string. --> Contar Caracteres em uma String, Inverter String, Checar Palíndromo
	//toupper --> Converte um caractere minúsculo para maiúsculo. --> Converter para Maiúsculas.
	//strcmp --> Compara duas strings. Retorna zero se as strings são iguais. --> Pode ser útil para comparações em exercícios adicionais, embora não seja diretamente usada nos exercícios listados
	
	char palavra[100];
	int tamanho;
	
	printf("Digite uma palavra:\n");
	fgets(palavra, sizeof(palavra), stdin);
	fflush(stdin);
	tamanho = strlen(palavra);
	printf("A palavra tem %d caracteres", tamanho);
	
	return 0;
}
