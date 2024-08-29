#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//debugger
	
	char frase[80];
	int total;
	total = 0;
	int i;
	
	puts("Digite uma frase: ");
	gets(frase);
	
	for(i = 0; i < 80; i++){
		if(frase[i] != '\0'){
			total++;
		}else{
			break;
		}
	}
	
	printf("O tomanho da frase e: %d ", total);
	
	
		
	return 0;
}
