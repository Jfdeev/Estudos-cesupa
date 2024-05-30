programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		// para 5 interações, a matriz deve ter um tamanho de 65x65
		// tamanho = 2^(5+1) + 1 (mais 1 para deixar a matriz impar, o que faz ela ter um meio exato)
		caracter matriz[65][65] // caracter consome menos memoria
		inteiro i, j, k, interacao

		// variável responsável por controlar o laço principal de processamento e o tamanho do caule e dos galhos
		interacao = 5
		
		// inicializar minha matriz, jogando todos os valores para ' '
		para(i = 0; i < 65; i++)
		{
			para(j = 0; j < 65; j++)
			{
				matriz[i][j] = ' '
			}
		}

		// a metade da última linha vai ficar com o valor 'U', que server como uma flag para começar
		// o processo de construir o caule da árvore.
		matriz[64][32] = 'U'
		

		// laço de repetição principal para o processamento da árvore
		enquanto(interacao > 0)
		{
			para(i = 0; i < 65; i++)
			{
				para(j = 0; j < 65; j++)
				{
					// procurar a flag U, construir o caule onde o tamanho é influenciado pelo valor da interação
					// depois de construir o caule, colocar a flag 'Y'
					se(matriz[i][j] == 'U')
					{
						// pega a linha e as linhas acimas e colocar o valor '|'
						para(k = 0; k < mat.potencia(2, interacao-1); k++)
						{
							matriz[i-k][j] = '|'
						}
						matriz[i-k][j] = 'Y'
					}
				}
			}

			para(i = 0; i < 65; i++)
			{
				para(j = 0; j < 65; j++)
				{
					// procurar a flag Y, construir os galhos onde o tamanho é influenciado pelo valor da interação
					// depois de construir o caule, colocar a flag 'Y'
					se(matriz[i][j] == 'Y')
					{
						// pega a linha e as linhas acima, assim como as colunas a esquerda e a direita para colocar o valor '\' e '/'
						para(k = 0; k < mat.potencia(2, interacao-1); k++)
						{
							matriz[i-k][j-k] = '\'
							matriz[i-k][j+k] = '/'
						}
						matriz[i-k][j-k] = 'U'
						matriz[i-k][j+k] = 'U'
					}
				}
			}

			// depois de procurar por todos os 'U' e 'Y' dessa interacao, atualizar seu valor.
			interacao--
		}
	

		// imprimir a matriz.
		para(i = 0; i < 65; i++)
		{
			para(j = 0; j < 65; j++)
			{
				escreva(matriz[i][j])
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
 * @POSICAO-CURSOR = 207; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */