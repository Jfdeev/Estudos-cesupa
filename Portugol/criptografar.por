programa
{
	inclua biblioteca Texto --> tx
		cadeia nome
		cadeia nome2 = "o"
		cadeia switch 
		cadeia L1[5] = {"a","e","i","o","u"}
		cadeia L2[5] = {"f","g","h","j","k"}
		cadeia L3[5] = {"A","E","I","O","U"}
		cadeia L4[5] = {"F","G","H","J","K"}
		inteiro i
		funcao criptografar(cadeia nome){
			nome2 = nome
			para(i = 0; i < 5; i++){
			switch = tx.substituir(nome, L2[i], L1[i])
			nome = switch
		}
		se (nome2 == nome){
			para(i = 0; i < 5; i++){
				switch = tx.substituir(nome, L1[i], L2[i])
				nome = switch
			}
		}
		para(i = 0; i < 5; i++){
			switch = tx.substituir(nome, L4[i], L3[i])
			nome = switch
		}
		
		se(nome2 == nome){
			para(i = 0; i < 5; i++){
				switch = tx.substituir(nome, L3[i], L4[i])
				nome = switch
				
			}
		 }
		}
	
	funcao inicio()
	{
		

		escreva("Digite seu nome: ")
		leia(nome)

		
		criptografar(nome)
		
		escreva("\n", nome)
		escreva(" ---> ", switch)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 126; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */