#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[130];
	int x;
	int i;
	int j;
	int l;
	int tam;
	int aleatorio;
	srand(time(NULL));
	
	printf("Digite uma frase para ser reorganizada: ");
	gets(str);
	printf("Digite quantas vezes voce quer que ela seja reorganizada: ");
	scanf("%d", &x);
	
	tam = strlen(str);
	char letras_aleatorias[130];
	
	
	for(i = 0; i < x; i++){
		for(j = 0; j < tam; j++){
			letras_aleatorias[j] = ' ';
		}
		
		for(l = 0; l < tam; l++){
			aleatorio = rand()%tam;
			if(letras_aleatorias[aleatorio] == ' '){
				letras_aleatorias[aleatorio] = str[l];
			}else{
				l--;
			}
		}
		printf("--> %s\n", letras_aleatorias);
	}
	
	return 0;
}
