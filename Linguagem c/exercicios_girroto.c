#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int menu;
	
	printf("Bem vindo ao menu de atividades do prof girroto da materia de vetores!\n");
	
	printf("digite qual das questao voce vai resolver\n(1)Escreva um programa que realize a leitura dos salarios pagos a um indivíduo durante um ano. Em seguida, o programa devera mostrar os valores mensais e o total anual.\n(2)Escreva um programa que peça ao usuario para inserir 10 numeros inteiros, armazene-os em um vetor e imprima os numeros na ordem inversa.\n(3)Desenvolver um programa onde o usuario insira os valores para um vetor A de tamanho 10. No final, apresentar o total da soma de todos os elementos do vetor A que sejam pares.");
	scanf("%d", &menu);
	
	if(menu==1){
		int salario[12];
		int total;
		int mes;
		
	 printf("Digite os salários pagos ao indivíduo durante o ano:\n");
    	for (mes = 0; mes < 12; mes++) {
        	printf("Salario do mes %d: ", mes + 1);
        	scanf("%d", &salario[mes]);
        	total += salario[mes]; 
    	}
    	
    	printf("o salario total e: %d", total);
		
	}
	else if(menu==2){
		int numero[10];
		int i;
		
		printf("digite 10 numeros inteiros\n");
		for(i=0;i<10;i++){
			printf("Numero %d:", i + 1);
			scanf("%d", &numero[i]);
		}
		
		printf("\ndigitando na ordem inversa\n");
		for(i=9;i>=0;i--){
			printf("%d ", numero[i]);
		}
	}
	else if(menu==3){
		int a[10];
		int i, soma;
		
		printf("Digite 10 valores inteiros para o vetor A:\n");
    	for (i = 0; i < 10; i++) {
        	printf("Valor %d: ", i + 1);
        	scanf("%d", &a[i]);
    }
    	for(i=0; i<10; i++){
    		if(a[i] % 2 == 0){
    			soma += a[i];
			}
		}
		printf("O resultado dos valores pares e: %d", soma);
	}
	return 0;
}
