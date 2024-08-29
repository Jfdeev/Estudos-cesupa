#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char nome1[MAX_LEN], nome2[MAX_LEN], nome3[MAX_LEN];
    char temp[MAX_LEN];

    // Ler os nomes do usuario
    printf("Digite o primeiro nome(primeira letra Maiuscula): ");
    fgets(nome1, MAX_LEN, stdin);
    printf("Digite o segundo nome(primeira letra Maiuscula): ");
    fgets(nome2, MAX_LEN, stdin);
    printf("Digite o terceiro nome(primeira letra Maiuscula): ");
    fgets(nome3, MAX_LEN, stdin);

    // Remover os caracteres de nova linha no final das strings
    nome1[strcspn(nome1, "\n")] = '\0';
    nome2[strcspn(nome2, "\n")] = '\0';
    nome3[strcspn(nome3, "\n")] = '\0';

    // Ordenar os nomes em ordem alfabetica usando troca simples
    if (strcmp(nome1, nome2) > 0) {
        strcpy(temp, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, temp);
    }

    if (strcmp(nome1, nome3) > 0) {
        strcpy(temp, nome1);
        strcpy(nome1, nome3);
        strcpy(nome3, temp);
    }
 
    if (strcmp(nome2, nome3) > 0) {
        strcpy(temp, nome2);
        strcpy(nome2, nome3);
        strcpy(nome3, temp);
    }

    // Imprimir os nomes em ordem alfabetica
    printf("Nomes em ordem alfabetica:\n");
    printf("%s\n", nome1);
    printf("%s\n", nome2);
    printf("%s\n", nome3);

    return 0;
}
