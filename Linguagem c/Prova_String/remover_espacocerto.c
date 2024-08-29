#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int i, j = 0;
    
    printf("Digite uma string com espacos em branco: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove os espa�os em branco da string
    for (i = 0; str[i] != '\0'; i++) {
        // Se o caractere n�o � um espa�o em branco
        if (str[i] != ' ') {
            str[j++] = str[i]; // Copia o caractere para a posicao j
        }
    }
    // Mostra a string sem espa�os em branco
    printf("String sem espacos em branco: %s\n", str);
    
    return 0;
}
