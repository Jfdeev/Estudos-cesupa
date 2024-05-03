#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int medias1[5];
	float medias2[5];
	int i, j;
	int soma=0;
	
	for(i=0;i<5;i++){
		printf("digite o valor da nota: ");
		scanf("%d", &medias1[i]);
	}
	
	for(i=0;i<5;i++){
			printf("\nnotas da avaliacao %d: %d", i+1, medias1[i]);
	}
	soma += medias1[0]+medias1[1]+medias1[2]+medias1[3]+medias1[4];
	if(soma>=35){
		printf("\nVoce foi aprovado");
	} else{
		printf("\nVoce foi reprovado");
	}
	return 0;
}
