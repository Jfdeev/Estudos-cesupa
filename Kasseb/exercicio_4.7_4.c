#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int salario;
	int emprestimo;
	
	printf("Digite seu salario: ");
	scanf("%d", &salario);
	printf("Digite o valor da prestacao do seu emprstimo: ");
	scanf("%d", &emprestimo);
	
	if(emprestimo>0.20*salario){
		printf("Emprstimo nao concedido!");
	}else{
		printf("Emprestimo concedido!");
	}
	
	return 0;
}
