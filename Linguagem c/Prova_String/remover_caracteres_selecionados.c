#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str[100];
    char carac;
    int len;
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    str[strcspn(str, "\n")] = '\0';

    printf("Digite um caracter para remover: ");
    scanf(" %c", &carac);

    int i, j = 0;

    for(i = 0; i < len; i++){
        if(str[i] != carac){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    puts(str);
    return 0;
}
