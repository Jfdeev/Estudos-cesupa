programa
{
	funcao media(real nota01, real nota02, real nota03){
		real media1

		media1 = (nota01+nota02+nota03)/3

		escreva("A media das tres provas foi ", media1)
		
	}
	funcao inicio()
	{
		real n01, n02, n03

		escreva("Nota prova 1: \n")
		leia(n01)
		escreva("Nota prova 2: \n")
		leia(n02)
		escreva("Nota prova 3: \n")
		leia(n03)

		media(n01,n02,n03)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 374; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */