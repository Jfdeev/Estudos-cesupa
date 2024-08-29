#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char str1[30];
	char str2[30];
	int tamanho;
	int i;
	int j;
	int comparacao;
	
	printf("Digite uma fraase: ");
	scanf("%[^\n]", str1);
	
	for(i = 0; i < 30; i++){
		str1[i] = toupper(str1[i]);
	}
	
	tamanho = strlen(str1);
	
	j=0;
	for(i=tamanho-1; i>=0; i--){
		str2[j] = str1[i];
		j++;
	}
	
	
	comparacao = strcmp(str1, str2);
	
	if(comparacao==0){
		puts("Voce digitou um polindromo");
	}else{
		puts("Voce nao digitou um polindromo");
	}
	
	
	return 0;
}
