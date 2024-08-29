#include <stdio.h>
#include <ctype.h>

int contarConsoantes(char *str) {
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if ((c >= 'a' && c <= 'z') && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    
    // Ler a string
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    // Contar consoantes
    int consoantes = contarConsoantes(str);

    // Exibir o resultado
    printf("O numero de consoantes na string eh: %d\n", consoantes);

    return 0; // Correção: moveu esta linha para dentro da função main()
}
