#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Escreva um programa que leia duas strings e verifique se
	//a segunda string é uma substring da primeira.
	
	char str1[100];
	char str2[100];

    
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    
    if (strstr(str1, str2) != NULL) {
        printf("A segunda string e uma substring da primeira.\n");
    } else {
        printf("A segunda string nao e uma substring da primeira.\n");
    }

	
	return 0;
}
