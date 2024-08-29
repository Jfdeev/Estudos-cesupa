#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//
void substituirCaractere(char *str, char antigo, char novo) {
    while (*str != '\0') {
        if (*str == antigo) {
            *str = novo;
        }
        str++;
    }
}

int main() {
    char str[100];
    char antigo, novo;
    
    
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    
    printf("Digite o caractere a ser substituido: ");
    scanf(" %c", &antigo);

   
    printf("Digite o caractere novo: ");
    scanf(" %c", &novo);

    
    substituirCaractere(str, antigo, novo);

    
    printf("String modificada: %s\n", str);

    return 0;
}
