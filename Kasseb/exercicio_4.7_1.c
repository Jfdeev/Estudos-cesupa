#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	if(a>b){
		printf("O maior valor e: %d", a);
	}else if(b>a){
		printf("O maior valor e %d", b);
	}else{
		printf("Os valores sao iguais!");
	}
	return 0;
}
