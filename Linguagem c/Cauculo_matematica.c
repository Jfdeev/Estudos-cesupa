#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int num1, num2, result;
    char op;

    printf("Digite uma expressão (ex: 3+5): ");
    gets(str);

    sscanf(str, "%d%c%d", &num1, &op, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Erro: divisão por zero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido.\n");
            return 1;
    }

    printf("Resultado: %d\n", result);
    return 0;
}
