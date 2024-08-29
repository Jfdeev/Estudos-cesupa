#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//  deve validar o login giroto@cesupa.br e senha 123123. caso correto informa bem vindo, caso nao informe incorreto 
	
	char login[30] = "giroto@cesupa.br";
	char senha[30] = "123123";
	
	printf("Informe email: ");
	scanf("%s", login);
	
	printf("Informe senha: ");
	scanf("%s", senha);
	
	if(srtcmp(login,"giroto@cesupa.br")!=0){
		puts("login incorreto");
	} else if (senha != "123123"){
		puts("senha invalida");
	}else{
		puts("Bem vindo");
	}
	
	
	
	return 0;
}
