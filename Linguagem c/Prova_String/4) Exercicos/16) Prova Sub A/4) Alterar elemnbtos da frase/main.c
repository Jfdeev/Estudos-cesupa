#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char frase[100];
    char substituto;
    int tamanho, i;

    // Ler a frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remover o caractere de nova linha

    // Exibir a frase original
    printf("Frase original: %s\n", frase);

    // Calcular o tamanho da frase
    tamanho = strlen(frase);

    // Alterar a frase de acordo com as regras
    for (i = 0; i < tamanho; i++) {
        if (frase[i] == 'a') {
            frase[i] = '4';
        } else if (frase[i] == 's') {
            printf("Digite um caractere para substituir 's': ");
            scanf(" %c", &substituto);
            frase[i] = substituto;
        } else if (frase[i] == ' ') {
            frase[i] = tamanho + '0';
        }
    }

    // Exibir a frase alterada
    printf("Frase alterada: %s\n", frase);
	
	return 0;
}
