programa
{
	inteiro vetor[10]
	inteiro i
	funcao ordem(){
		inteiro proximo_numero = 1
		inteiro verificador_ordem = 0
		inteiro numero_anterior = 0
		
			se(vetor[proximo_numero] == vetor[numero_anterior] + 1){
				escreva("esta em ordem crescente")	
			}senao se(vetor[proximo_numero] == vetor[numero_anterior] - 1){
			escreva("ordem decrecente")
		}senao{
			escreva("Nao ordenada")
		}
	}
	funcao inicio()
	{	
			para(i=0;i<10;i++){
			escreva("Digite 10 numeros")
			leia(vetor[i])
			}
			ordem()
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 419; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {vetor, 3, 10, 5}-{numero_anterior, 8, 10, 15};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */