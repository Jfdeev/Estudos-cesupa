#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char str1[100];
    char str2[100];
    char resultado[200]; // Tamanho suficiente para conter ambas as strings concatenadas

    
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remover o caractere de nova linha

    
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    
    strcpy(resultado, str1);
    strcat(resultado, str2);

    printf("As strings concatenadas sao: %s\n", resultado);
	
	return 0;
}
