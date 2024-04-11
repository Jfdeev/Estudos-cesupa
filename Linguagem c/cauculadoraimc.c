#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int horas, minutos, segundos;
	
	//solicita para o usuario informe o tempo necessario
	printf("Insira o tempo em horas: ");
    scanf("%d", &horas);
    
	//converte o  tempo 
	minutos = horas * 60;
	segundos = horas * 3600;
	
	//exibe o resultado
	printf("%d horas e igual a %d minutos e %d segundos! ", horas, minutos , segundos);
}
