#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	i = 0;
	char palavra[50] = {"Oi, eu odeio a minha vida"};
	
	fgets(palavra, 50, stdin);
	
	while(palavra[i]!='\0'){
		printf("%d = %d\n", i, palavra[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}
