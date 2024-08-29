#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void cifraDeCesar(char *str, int chave) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        // Verifica se o caractere é uma letra maiúscula
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + chave) % 26;
        }
        // Verifica se o caractere é uma letra minúscula
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + chave) % 26;
        }
    }
}

int main() {
    char str[100];
    int chave;

    // Ler a string
    printf("Digite uma frase para criptografar: ");
    fgets(str, sizeof(str), stdin);

    // Remover o caractere de nova linha do fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Ler a chave de criptografia
    printf("Digite a chave de criptografia (um valor inteiro): ");
    scanf("%d", &chave);

    // Criptografar a string usando a cifra de César
    cifraDeCesar(str, chave);

    // Exibir a string criptografada
    printf("String criptografada: %s\n", str);

    return 0;
}
