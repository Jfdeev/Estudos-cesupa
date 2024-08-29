#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    
    char nome[130];
		int n;
		int i;
		int j;
		int k;
		int tamanho;
		srand(time(NULL));//gerando a semente//
		printf("digite algo:\n");
		fgets(nome,130,stdin);
		 if(nome[strlen(nome)-1]=='\n'){// quando apertar enter encerrar a string//
			nome[strlen(nome)-1]='\0';
		}
		printf("digite quantas voce quer embaralhar:\n");
		scanf("%d",&n);//quantas vezes vai gerar aleatorio//
		tamanho=strlen(nome);

		for(k=0;k<n;k++){//gerar a quantidades de vezes q o usuario colocar na roataçao
			for(i=0;i<tamanho-1;i++){//percorrer toda a string//
				j=i+rand()%(tamanho-i);//gerar um indice aleatorio,importante somar o rand com i, para que n fuja do tamanho da string//
				char temp=nome[i];//criando uma variavel temporaria para armazenar//
				nome[i]=nome[j];//adiconando a string em nome[j]//
				nome[j]=temp;//adicionando o caracter gerado pelo j em i que no caso e a variavel temporaria//
			}
			printf("%s\n",nome);
		}

    return 0;
}
