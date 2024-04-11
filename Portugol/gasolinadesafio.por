programa
{
	
	funcao inicio()
	{
	inteiro litro
	cadeia combustivel
	real valor
	
	
		
escreva("Coloque quantos litros vc deseja: ")
		leia(litro)
		escreva("qual combustivel vc deseja: ")
		leia(combustivel)

		se(combustivel == "gasolina" e litro <= 20){
			 valor = litro * 5.44
			 escreva("Sua gasolina custa:" , valor)
		}
		se(combustivel == "gasolina" e litro > 20){
			valor = litro * 5.33
			escreva("Sua gasolina custa:" , valor)
			}	
		se(combustivel == "alcool" e litro <= 20){
			valor = litro * 4.71
			escreva("Sua gasolina custa:" , valor)
		}
		se(combustivel == "alcool" e litro > 20){
			valor = litro * 4.61
			escreva("Sua gasolina custa:" , valor)
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 625; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */