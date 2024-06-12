#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_TENTATIVAS 6

void exibirForca(int tentativas) {
    if (tentativas >= 1) printf(" O\n");
    if (tentativas >= 2) printf(" |\n");
    if (tentativas >= 3) printf("/|");
    if (tentativas >= 4) printf("\\\n");
    if (tentativas >= 5) printf("/");
    if (tentativas >= 6) printf(" \\\n");
}

void inicializarPalavraOculta(const char *palavraSecreta, char *palavraOculta) {
    for (int i = 0; i < strlen(palavraSecreta); i++) {
        palavraOculta[i] = '_';
    }
    palavraOculta[strlen(palavraSecreta)] = '\0';
}

int verificarChute(char chute, const char *palavraSecreta, char *palavraOculta) {
    int correto = 0;
    for (int i = 0; i < strlen(palavraSecreta); i++) {
        if (toupper(palavraSecreta[i]) == toupper(chute)) {
            palavraOculta[i] = palavraSecreta[i];
            correto = 1;
        }
    }
    return correto;
}

int main() {
    char *palavras[] = {"CESUPA", "ARGO", "BELEM"};
    int numPalavras = sizeof(palavras) / sizeof(palavras[0]);
    char palavraSecreta[50], palavraOculta[50], chute;
    int tentativas = 0, acertou = 0;

    srand(time(NULL));
    strcpy(palavraSecreta, palavras[rand() % numPalavras]);
    inicializarPalavraOculta(palavraSecreta, palavraOculta);

    while (tentativas < MAX_TENTATIVAS && !acertou) {
        printf("Palavra: %s\n", palavraOculta);
        exibirForca(tentativas);
        printf("Tentativa %d de %d\n", tentativas + 1, MAX_TENTATIVAS);
        printf("Digite uma letra: ");
        scanf(" %c", &chute);

        if (!verificarChute(chute, palavraSecreta, palavraOculta)) {
            tentativas++;
        }

        if (strcmp(palavraOculta, palavraSecreta) == 0) {
            acertou = 1;
        }
    }

    if (acertou) {
        printf("Parabéns! Você acertou a palavra: %s\n", palavraSecreta);
    } else {
        printf("Você perdeu! A palavra era: %s\n", palavraSecreta);
        exibirForca(tentativas);
    }

    return 0;
}
