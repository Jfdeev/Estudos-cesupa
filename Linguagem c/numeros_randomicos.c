#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n;
	
	srand(time(NULL));
	
	printf("Digite quantos caracteres vc quer:\n");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Por favor insira um numero positivo\n");
		return 1;
	}
	
	printf("%d vogais sorteadas\n", n);
	
	for(i=0;i<n;i++){
		char vogais[] = {'a','e','i','o','u'};
		char vogal = vogais[rand() % 5];
		printf("%c ", vogal);
		}
	return 0;
}
