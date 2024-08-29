#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void removerEspacosExtras(char *str) {
    int length = strlen(str);
    int i, j = 0;
    int espacoAnterior = 0;

    for (i = 0; i < length; i++) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
            espacoAnterior = 0;
        } else if (!espacoAnterior) {
            str[j++] = ' ';
            espacoAnterior = 1;
        }
    }
    str[j] = '\0'; // Adicionar o caractere nulo ao final da string
}

int main(int argc, char *argv[]) {
	
	char str[100];

    // Ler a string
    printf("Digite uma frase com espacos extras: ");
    fgets(str, sizeof(str), stdin);

    // Remover o caractere de nova linha do fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Remover espaços em branco extras
    removerEspacosExtras(str);

    // Exibir a string sem espaços extras
    printf("String sem espacos extras: %s\n", str);

	
	return 0;
}
