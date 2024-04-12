#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int a;
	int raiz;
	int potencia;
	
	while(x!=3){
		printf("\nMenu\n(1) Numero ao quadrado\n(2) Raiz quadrada de um numero\n(3) Sair\n ");
		scanf("%d", &x);
		if(x==1){
			printf("\nDigite o numero desejado: ");
			scanf("%d", &a);
			potencia = pow(a, 2);
			printf("o resultado de %d elevado ao quadrado e %d", a, potencia);
		}else if(x==2){
			printf("Digite um numero: ");
			scanf("%d", &a);
			raiz = sqrt(a);
			printf("a raiz quadrada de %d e %d", a, raiz);
		}
	}
	return 0;
}
