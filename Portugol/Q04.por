programa
{
	inclua biblioteca Util --> ut
	funcao inicio()
	{
		inteiro matriz[10][10], i, j

		para(i = 0; i < 10; i++)
		{
			para(j = 0; j < 10; j++)
			{
				matriz[i][j] = ut.sorteia(0, 100)
			}
		}

		para(i = 0; i < 10; i++)
		{
			para(j = 0; j < 10; j++)
			{
				se(j > i)
				{
					escreva(matriz[i][j], "\t")
				}
				senao
				{
					escreva("-\t")
				}
			}
			escreva("\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 287; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */