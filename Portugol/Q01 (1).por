programa
{
	
	funcao inicio()
	{
		inteiro vet[10], w[10], i

		para(i = 0; i < 10; i++)
		{
			escreva("Digite o ", i+1, "º elemento do vetor: ")
			leia(vet[i])
		}

		para(i = 0; i < 10; i++)
		{
			w[i] = vet[i]*vet[i]
		}

		para(i = 0; i < 10; i++)
		{
			escreva("w[", i,"] = ", w[i], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 301; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */