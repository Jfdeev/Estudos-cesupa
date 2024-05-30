programa
{
	
	funcao inicio()
	{
		real n1[10], n2[10], resultado[10]
		cadeia operacao[10]
		inteiro i

		para(i = 0; i < 10; i++)
		{
			escreva("Digite um numero: ")
			leia(n1[i])
			escreva("Digite uma operação (+ - * /): ")
			leia(operacao[i])
			escreva("Digite um numero: ")
			leia(n2[i])
		}

		para(i = 0; i < 10; i++)
		{
			se(operacao[i] == "+")
			{
				resultado[i] = n1[i] + n2[i]
			}
			senao se(operacao[i] == "-")
			{
				resultado[i] = n1[i] - n2[i]
			}
			senao se(operacao[i] == "*")
			{
				resultado[i] = n1[i] * n2[i]
			}
			senao se(operacao[i] == "/")
			{
				resultado[i] = n1[i] / n2[i]
			}
			senao
			{
				escreva("Operação invalida \n")
			}
		}

		para(i = 0; i < 10; i++)
		{
			escreva(n1[i], " ", operacao[i], " ", n2[i], " = ", resultado[i], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 234; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */