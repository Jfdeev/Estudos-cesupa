#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	char palavra1[100] = {"O lucas e muito lindo."};
	char palavra2[100] = {"Vida so me tras raiva"};
	
	strcat(palavra1, palavra2);
	
	printf("\n%s\n", palavra1);
	
	return 0;
}
