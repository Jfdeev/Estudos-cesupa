#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
	char caractere[10];
	int tamanho;
	int i;
	
	printf("Digite algo: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	
	printf("Digite algum caratere: ");
	fgets(caractere, sizeof(caractere), stdin);
	caractere[strcspn(caractere, "\n")] = 0;
	
	tamanho = strlen(str);

	
	for(i=0;i<tamanho;i++){
		//a por 4
		if(str[i] == 'a' || str[i] == 'A'){
			str[i] = '4';
		}
		//s por caractere informado
		if(str[i] == 's' || str[i] == 'S'){
			str[i] = caractere[0];
		}
	}
	for(i=0;i<tamanho;i++){
		if(str[i] != ' '){
			printf("%c", str[i]);
		}else{
			printf("%d", tamanho);
		}
	}
	return 0;
}
