programa
{
	
	funcao inicio()
	{
		inteiro C[2][3], tC[3][2], i, j

		para(i = 0; i < 2; i++)
		{
			para(j = 0; j < 3; j++)
			{
				escreva("Digite o valor para C[", i, "][", j,"]: ")
				leia(C[i][j])
			}
		}

		para(i = 0; i < 2; i++)
		{
			para(j = 0; j < 3; j++)
			{
				tC[j][i] = C[i][j]
			}
		}

		para(i = 0; i < 3; i++)
		{
			para(j = 0; j < 2; j++)
			{
				escreva(tC[i][j], "\t")
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
 * @POSICAO-CURSOR = 425; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */