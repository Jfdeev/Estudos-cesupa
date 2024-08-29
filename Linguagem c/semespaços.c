#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Digite uma string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String sem espaços: %s\n", str);
    return 0;
}
