#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char escolha;
	int a;
	char b;
	char c;
	char d;
	int resultado;
	int graus;
	float rad;
	
	while(1){
	printf("\nOla usuario, escolha algumas das opcoes\n(a) raiz quadrada de x\n(b) dobro de x\n(c) transforme graus para radiano\n(d)Sair\n");
	scanf(" %c", &escolha);
	
	if(escolha == 'a'){
		printf("digite o valor de x: ");
		scanf("%d", &a);
		resultado = sqrt(a);
		printf("a raiz qda uadrade %d e %d",a ,  resultado);
	}
	else if(escolha == 'b'){
		printf("digite o valor de x: ");
		scanf("%d", &b);
		resultado = b * 2;
		printf("o dobro de %d e %d", b, resultado); 
	}
	else if(escolha == 'c'){
			printf("digite um valor em graus: ");
			scanf("%d", &graus);
			rad = graus*M_PI/180;
			printf("o valor de graus em radioano e %.1f", rad);
		}
	else if(escolha == 'd'){
		printf("saindo do menu");
		break;
	}
}
	return 0;
}
