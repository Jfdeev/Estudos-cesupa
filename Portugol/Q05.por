programa
{
	
	funcao inicio()
	{
		real A[10], B[10]
		inteiro i

		para(i = 0; i < 10; i++)
		{
			escreva("A[", i, "] = ")
			leia(A[i])
		}

		para(i = 0; i < 10; i++)
		{
			se(i%2 == 0){
				B[i] = A[i]*3
			}
			senao
			{
				B[i] = A[i]/2
			}
		}

		escreva("##### Vetor A #####\n")
		para(i = 0; i < 10; i++)
		{
			escreva(A[i], "\t")
		}

		escreva("\n##### Vetor B #####\n")
		para(i = 0; i < 10; i++)
		{
			escreva(B[i], "\t")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 450; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */