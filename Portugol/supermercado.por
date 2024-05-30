programa
{
	inclua biblioteca Calendario
	inclua biblioteca Matematica
		cadeia produto[15]
		inteiro produto_quantidade = 0
		inteiro validade[15]
		real valor[15]
		inteiro i
		cadeia lixo
	funcao cadastrar_produto(){
		limpa()
		se (produto_quantidade < 15) {
			escreva("O nome do produto: \n")
			leia(produto[produto_quantidade])
			escreva("Qual o valor: \n")
			leia(valor[produto_quantidade])
			escreva("Digite o ano da sua validade: \n")
			leia(validade[produto_quantidade])
			produto_quantidade++
			escreva("Produto Cadastrado com sucesso\n")
		} senao {
			escreva("Limite de produtos cadastrados atingido.\n")
		}
		escreva("Aperte qualquer botão para voltar ao menu..\n")
		leia(lixo)
	}
		
	funcao media(){
		real soma = 0.0
		real media1 = 0.0
	se (produto_quantidade == 0) {
		escreva("Nenhum produto cadastrado.\n")
	} senao {
		para (i = 0; i < produto_quantidade; i++) {
			soma = soma + valor[i]
		}
		media1 = soma / produto_quantidade
		escreva("A Média de preço dos produtos é ", media1)
	}
	escreva("\nAperte qualquer botão para voltar ao menu..\n")
	leia(lixo)
	}
	funcao lista(){
		limpa()
		se (produto_quantidade == 0) {
			escreva("Nenhum produto cadastrado.\n")
		} senao {
			escreva("Os produtos cadastrados são:\n")
		para (i = 0; i < produto_quantidade; i++) {
			escreva("Produto ", i + 1, ": ", produto[i], "\n")
		}
	}
		escreva("\nAperte qualquer botão para voltar ao menu..\n")
		leia(lixo)
	}
	funcao validade1(){
		limpa()
		inteiro ano_atual
		se (produto_quantidade == 0) {
			escreva("Nenhum produto cadastrado.\n")
			escreva("\nAperte qualquer botão para voltar ao menu..\n")
			leia(lixo)
		}senao{
			escreva("Qual o ano atual\n")
			leia(ano_atual)
			para(i=0; i < produto_quantidade; i++){
				se(validade[i] <= ano_atual){
					escreva("Existem Produtos Fora da Validade!")
					escreva("\nAperte qualquer botão para voltar ao menu..\n")
					leia(lixo)
				}senao{
					escreva("Todos os produtos estao na validade")
					escreva("\nAperte qualquer botão para voltar ao menu..\n")
					leia(lixo)
				}
			}
		}
	}
	funcao inicio()
	{	
		cadeia escolha_usuario
		faca{
		limpa()
		escreva("Super Mercado Novo Hamburgo\n")
		escreva("O - Cadastrar Novo Produto\n")
		escreva("B - Fazer Média\n")
		escreva("D - Lista\n")
		escreva("W - Validade\n")
		escreva("C - Sair\n")
		leia(escolha_usuario)
		se(escolha_usuario == "O"){
			cadastrar_produto()
		}
		se(escolha_usuario == "B"){
			media()
		}
		se(escolha_usuario == "D"){
			lista()
		}
		se(escolha_usuario == "W"){
			validade1()
		}
		}enquanto(escolha_usuario != "C")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1641; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */