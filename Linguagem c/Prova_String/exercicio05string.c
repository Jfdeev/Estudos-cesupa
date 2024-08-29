#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palavra1[100];
	char palavra2[100];
	int tamanho;
	int i, j;
	int comparacao;
	
	puts("Digite algo: ");
	gets(palavra1);
	
	
	for(i=0;i<100;i++){
		palavra1[i] = toupper(palavra1[i]);
	}
	tamanho = strlen(palavra1);
	j=0;
	for(i=tamanho - 1; i >= 0; i--){
		palavra2[j] = palavra1[i];
		j++;
	}
	comparacao = strcmp(palavra1, palavra2);
	if(comparacao == 0){
		printf("A palavra e um palindromo");
	}else{
		printf("A palavra nao e um palindromo");
	}
	return 0;
}
