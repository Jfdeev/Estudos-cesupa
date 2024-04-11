programa
{
	
	funcao inicio()
	{
		inteiro a, b
		inteiro c
		inteiro posicao
		
		escreva("Digite o 1° termo: ")
		leia(a)
		escreva("Digite o 2° termo: ")
		leia(b)
		escreva(a, " ", b)

		para(posicao = 3; posicao <= 10; posicao++){
			se(posicao%2 == 1){
				c = a+b
			}
			senao{
				c = b-a
			}
			escreva(" ", c)
			a = b
			b = c
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 82; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {a, 6, 10, 1}-{b, 6, 13, 1}-{c, 7, 10, 1}-{posicao, 8, 10, 7};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */