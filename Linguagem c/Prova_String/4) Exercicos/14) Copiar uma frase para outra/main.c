#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char frase1[100];
    char frase2[100];
    char temp[100];

    printf("Informe a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; // Remover o caractere de nova linha

    printf("Informe a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0'; // Remover o caractere de nova linha

    // Troca o conteúdo das variáveis frase1 e frase2 usando strcpy
    strcpy(temp, frase1);
    strcpy(frase1, frase2);
    strcpy(frase2, temp);

    printf("As frases foram trocadas:\n");
    printf("Frase 1: %s\n", frase1);
    printf("Frase 2: %s\n", frase2);
    
	return 0;
}
