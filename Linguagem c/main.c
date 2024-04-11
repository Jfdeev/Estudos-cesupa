#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int x;
	int y;
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	
	if(x < y){
		while(x <= y){
			printf("%d ", x);
			x += 10;
		}
	}
	else if(y < x){
		while(y <= x){
			printf("%d ", y);
			y += 10;
		}
	}
	return 0;
}
