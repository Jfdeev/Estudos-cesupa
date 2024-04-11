programa
{
	
	funcao inicio()
	{
		inteiro altura,comprimento,i,j
		escreva("digite a altura do retangulo: ")
		leia(altura)
		escreva("o comprimento do retangulo")
		leia(comprimento)
		i=0
		enquanto(i<altura){
			j=0
			enquanto(j<comprimento){
			 se(i==0 ou i==altura-1){
			 	escreva("#")
			 }
			 senao{
			 se(j==0 ou j==comprimento-1){
			 	escreva("#")
			 }
			 senao{
			 	escreva("-")
			 }
			}
		  j++
		}
		escreva("\n")
	  i++
	  }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 449; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */