#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int i;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("O numero e par!");
	}else if(a%2==1){
		printf("O numero e impar!");
	}
	return 0;
}
