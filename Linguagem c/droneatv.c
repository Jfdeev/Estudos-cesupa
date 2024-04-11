#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	
	printf("digite a coordenada de x: ");
	scanf("%d", &x);
	printf("digite a coordenada de y: ");
	scanf("%d", &y);
	
	if(x <= 4 && y <= 3 && x > 2 && y > 1){
		printf("e possivel pousar na regiao a!");
	}
	else if(x <= 18 && y <= 15 && x > 9 && y > 11){
		printf("e possivel pousar na regiao b");
	}
	else{
		printf("nao e possivel pousar!");
	}
	return 0;
}
