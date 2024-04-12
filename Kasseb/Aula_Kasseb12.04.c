#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	i = 1;
	
	while(i==1){
		printf("Menu\n(1) escrever ola mundo!\n(2) sair\n");
		scanf("%d", &i);
		
		if(i==1){
			printf("Ola Mundo!");
		}
		system("pause>null");
		system("cls");
	}
	
	return 0;
}
