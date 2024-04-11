programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		inteiro expoente, numero

		escreva("digite o valor para numero: ")
		leia(numero)
		
		expoente = 1
		
		enquanto(mat.potencia(expoente, expoente) <= numero){
			se (mat.potencia(expoente, expoente) == numero){
				escreva(numero," = ", expoente, "^", expoente)
			}
			expoente = expoente + 1
			
		}
			se(mat.potencia(expoente, expoente) != numero){
				escreva("o numero nao respeita a propriedade")
		}
  }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 485; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */