#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void contarvogais(char *str){
	// Array contar vogais a,e,i,o,u
		int vogais[5]={0};
		int i;
		int c;
		
		// Converter para minusculo facilitar 
		for(i = 0; str[i]; i++){
			str[i] = tolower(str[i]);
		}
		
		// lopp atraves da string contar vogais
		for(i=0;str[i]; i++){
			c = str[i];
			if(c=='a'){
				vogais[0]++;
			} else if(c=='e'){
				vogais[1]++;
			} else if(c=='i'){
				vogais[2]++;
			} else if(c=='o'){
				vogais[3]++;
			} else if(c=='u'){
				vogais[4]++;
			}
		}
		
		// imprime os resultados 
		printf("Contagem de vogais: \n");
		printf("A: %d\n", vogais[0]);
		printf("E: %d\n", vogais[1]);
		printf("I: %d\n", vogais[2]);
		printf("O: %d\n", vogais[3]);
		printf("U: %d\n", vogais[4]);		
			
	}

int main(int argc, char *argv[]) {
	
	char str[100];
	printf("Digite uma frase: ");
	fgets(str, sizeof(str),stdin);
	
	// remove a quebra de linha pelo fgets
	if(str[strlen(str)-1]=='\n'){
		str[strlen(str)-1]='\0';
	}
	
	// chamar void 
	contarvogais(str);
	
	return 0;
}
