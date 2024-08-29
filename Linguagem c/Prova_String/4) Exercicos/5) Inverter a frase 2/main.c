#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char str1[30];
	char str2[30];
	
	int tamanho;
	
	int i;
	int j;
	
	printf("Digite qualquer coisa: ");
	gets(str1);
	
	tamanho = strlen(str1);
	
	j = 0;
	for(i = tamanho-1; i >= 0; i--){
		str2[j] = str1[i];
		
		j++;
	}
	
	puts(str2);
	printf("%d",tamanho);
	puts(str1) ;
	
	return 0;
}
