programa
{
	
	funcao inicio()
	{
		inteiro v[20]
		inteiro i
		inteiro contador = 0

		para(i = 0; i < 20; i++){
			escreva("V[",i,"]: ")
			leia(v[i])
		}
		para(i = 0; i < 20; i++){
			escreva(v[i], "  ")
		}
		escreva("\n")

		para(i = 0; i <= 20-3; i++){
			escreva("[",v[i]," ", v[i+1], " ", v[i+2],"]")
			se(v[i] == v[i+2] e v[i+1] != v[i]){
				escreva(" é bumerangue\n")
				contador++
			}
			senao{
				escreva(" não é bumerangue\n")
			}
		}
		escreva("Quantidade: ", contador, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 88; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */