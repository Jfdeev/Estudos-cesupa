programa
{
	
	funcao inicio()
	{
		real altura[5][10], maior[5]
		inteiro i, j

		para(i = 0; i < 5; i++)
		{
			para(j = 0; j < 10; j++)
			{
				escreva("Delegação: ", i+1, "\t Atleta: ", j+1, "\n Digite a altura: ")
				leia(altura[i][j])
			}
			maior[i] = 0
		}

		para(i = 0; i < 5; i++)
		{
			para(j = 0; j < 10; j++)
			{
				se(altura[i][j] > maior[i])
					maior[i] = altura[i][j]
			}
		}

		escreva("##### Delegação #####\n")
		para(i = 0; i < 5; i++)
		{
			para(j = 0; j < 10; j++)
			{
				escreva(altura[i][j], "\t")
			}
			escreva("\n")
		}

		escreva("##### Maior Altura #####\n")
		para(i = 0; i < 5; i++)
		{
			escreva(maior[i], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 365; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */