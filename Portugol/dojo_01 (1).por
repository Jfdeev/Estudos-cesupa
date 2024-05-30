programa
{
	
	funcao inicio()
	{
		inteiro i
		inteiro vetor[15]
		
		para(i = 0; i < 15;i++){
			escreva("V[",i,"]: ")
			leia(vetor[i])
		}

		para(i = 0; i < 15; i++){
			escreva(i+1,"ª: ")
			escreva(vetor[i])
			se(vetor[i]%2 == 0){
				escreva(" par")
			}
			senao{
				escreva(" ímpar")
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
 * @POSICAO-CURSOR = 198; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {vetor, 7, 10, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */