#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char menu;
	printf("a)frase ao contrario\nb)palavra aleatoria\nc)nome em ordem\nd)frase substituir a por 4, s por caracter e espaço por tamanho: \n");
	scanf(" %c",&menu);
	getchar();
	if(menu=='a'||menu=='A'){
		//declarando variaveis//
		char s[130];
		char s2[130];
		int i;
		int j=0;
		int tamanho;

		printf("digite uma frase:\n");
		fgets(s,130,stdin);
		if(s[strlen(s)-1]=='\n'){//quando apertar enter acabar de rergistrar a string//
			s[strlen(s)-1]='\0';
		}
		tamanho=strlen(s);//contar os caracteres da string s//

		for(i=tamanho-1;i>=0;i--){
			s2[j]=s[i];//salvar a string 2 igual a s que vc digitou,so que invertida//
			j++;//salvar a string2
		}
		printf("a palavra invertida e %s\n",s2);
	}
	if(menu=='b'||menu=='B'){
		//declarando variaveis//
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
		printf("digite quantas rotacoes voce quer:\n");
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

	}
	if(menu=='c'||menu=='C'){
		//declarando variaveis//
		char nome[130];
		char nome2[130];
		char nome3[130];
		char temp[130];

		printf("digite um nome:\n");
		fgets(nome,130,stdin);
		if(nome[strlen(nome)-1]=='\n'){//para quando acabar de escrever e apertar enter,salvar a string sem pular para uma noma linha//
			nome[strlen(nome)-1]='\0';
		}
		printf("digite um nome:\n");
		fgets(nome2,130,stdin);
		if(nome2[strlen(nome2)-1]=='\n'){//para quando acabar de escrever e apertar enter,salvar a string sem pular para uma noma linha//
			nome2[strlen(nome2)-1]='\0';
		}
		printf("digite um nome:\n");
		fgets(nome3,130,stdin);
		if(nome3[strlen(nome3)-1]=='\n'){//para quando acabar de escrever e apertar enter,salvar a string sem pular para uma noma linha//
			nome3[strlen(nome3)-1]='\0';
		}
		if(strcmp(nome,nome2)>0){//verificando se nome 2 e "maior" que nome em ordem alfabetica//
			strcpy(temp,nome);//adicione oq esta escrito em nome para a variavel temporaria criada//
			strcpy(nome,nome2);//adiciono o conteudo de nome 2 em nome//
			strcpy(nome2,temp);//adiciono o conteudo da variavel temporaria(antes era de nome) em nome2//
		}
		if(strcmp(nome,nome3)>0){//verificamos se nome 3 e "maior" que nome em ordem alfabetica//
			strcpy(temp,nome);//adiciono o conteudo de nome na variavel temporaria//
			strcpy(nome,nome3);//adiciono o conteudo de nome3 na variavel nome//
			strcpy(nome3,temp);//adiciono o conteudo da variavel temporaria(que e o nome armazenado do primeiro strcpy) em nome3//
		}
		if(strcmp(nome2,nome3)>0){//verificamos se nome 3 e "maior" que nome 2 em ordem alfabetica//
			strcpy(temp,nome2);//pega o conteudo de nome 2 e armazena na variavel temporaria//
			strcpy(nome2,nome3);//pega o conteudo de nome 3 e passa para nome 2//
			strcpy(nome3,temp);//pega o conteudo da variavel temporaria(que e a string de nome 2 passada para a temporaria no primeiro strcpy) para nome3//
		}
		printf("os nome sem ordem alfabetica sao\n");
		printf("%s\n",nome);
		printf("%s\n",nome2);
		printf("%s\n",nome3);
	}
	if(menu=='d'||menu=='D'){
		//declarando variaveis//
		char s[130];
		int i;
		int tamanho;
		char c;
		printf("digite algo:\n");
		fgets(s,130,stdin);
		if(s[strlen(s)-1]=='\n'){
			s[strlen(s)-1]='\0';
		}
		tamanho=strlen(s);

		if(s[i]=='a'||s[i]=='A'){//se tiver a na palavra que voce escreveu ela e substituida por 4//
			s[i]='4';//substitui por 4//
		}
		if(s[i]=='s'||s[i]=='S'){// se tiver s na palavra que voce digitou ele e susbtituida por um caracter que vocer escolher//
			printf("digite o caracter que vc quer que substitua no lugar do s:\n");
			scanf(" %c",&c);
			s[i]=c;//substitui pelo caracter escolhido//
		}
		for(i=0;i<tamanho;i++){//percorrer a string//

		 if(s[i]!=' '){//se tiver espaço na palavra que voce digitou, ele e substituido pelo tamanho da palavra//
			printf("%c",s[i]);// se n tiver espaço printa a string com as alteraçoes feitas//
		}else{
			printf("%d",tamanho);//substitui o espaço em branco pelo numero de caracteres da palavra//
		}
	}
	}
	return 0;
}
