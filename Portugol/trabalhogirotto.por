programa
{
	
	funcao inicio()
	{
		cadeia papel
		cadeia pedra
		cadeia tesoura
		cadeia lagarto
		cadeia spock
		cadeia jogador1
		cadeia jogador2

		escreva("Joagador 1, escolha entre pedra, papel, tesoura, largato ou spock: ")
		leia(jogador1)
	
		escreva("Jogador 2, escolha entre pedra, papel, tesoura, largato ou spock: ")
		leia(jogador2)

		//EMPATE

		se(jogador1 == jogador2){
			escreva("EMPATE!")
			}
			//VITORIA JOGADOR 1

		senao se((jogador1 == "pedra" e jogador2 == "tesoura") ou
				(jogador1 == "papel" e jogador2 == "pedra") ou
				(jogador1 == "tesoura" e jogador2 == "papel") ou
				(jogador1 == "pedra" e jogador2 == "lagarto") ou
				(jogador1 == "lagarto" e jogador2 == "spock") ou
				(jogador1 == "spock" e jogador2 == "tesoura") ou
				(jogador1 == "tesoura" e jogador2 == "lagarto") ou
				(jogador1 == "lagarto" e jogador2 == "papel") ou 
				(jogador1 == "papel" e jogador2 == "spock") ou 
				(jogador1 == "spock" e jogador2 == "pedra")){
					escreva("VITORIA DO JOGADOR 1!")
					}
				senao{
					escreva("VITORIA JOGADOR 2!")
					}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1081; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */