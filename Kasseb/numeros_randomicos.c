#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	srand(time(NULL));
	
	int x;
	int i;
	int a;
	int b;
	int n;
	int vogal;
	
	vogal = rand()%5;
	
	if(vogal == 0){
		printf("Menu 1");
	}
	if(vogal == 1){
		printf("Menu 2");
	}
	if(vogal == 2){
		printf("Menu 3");
	}
	if(vogal == 3){
		printf("Menu 4");
	}
	if(vogal == 4){
		printf("Menu 5");
	}
	
	printf("\nDigite quantos numeros voce quer: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		x = rand()%100;
		printf("%d ", x);
	}
	
	printf("\nDigite o numero minimo que voce quer: ");
	scanf("%d", &a);
	printf("\nDigite o numero maximo que voce quer: ");
	scanf("%d", &b);
	
	for(i=0;i<5;i++){
		x = a+rand()%((b+1)-a);
		
		printf("%d ", x);
	}
	return 0;
}
