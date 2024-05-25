#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palavra[100];
	int i;
	
	printf("Digite uma frase: ");
	scanf("%s", palavra);
	
	for(i=0;palavra[i] != '\0';i++){
		palavra[i] = toupper(palavra[i]);
	}
	printf("%s", palavra);
	return 0;
}
