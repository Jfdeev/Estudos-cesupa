programa
{
	inclua biblioteca Texto --> text
	inclua biblioteca Teclado --> key
	real saldos[50]
	logico contas[50]

	funcao abrir_conta(real saldo_inicial){
		inteiro i
		inteiro conta = -1
		cadeia lixo
		se(saldo_inicial > 0)
		{
		para(i = 0; i < 50; i++){
			se(nao contas[i]){
				conta = i
				contas[i] = verdadeiro
				pare
			}
		}
		se(conta >= 0){
			saldos[conta] = saldo_inicial
			escreva("Conta aberta com sucesso\n")
			escreva("Conta N° ", conta + 1001, "\n")
		}
		senao{
			escreva("Não há mais contas disponiveis\n")
		}
		}
		senao{
			escreva("Saldo inválido!\n")
		}
		leia(lixo)
	}

	funcao consultar_saldo(inteiro numero_conta){
		cadeia lixo
		se(numero_conta >= 1001 e numero_conta <= 1050)
		{
		se(contas[numero_conta - 1001]){
			escreva("N° Conta: ", numero_conta, "\n")
			escreva("Saldo: ", saldos[numero_conta-1001], "\n")
		}
		senao{
			escreva("Conta não existe\n")
		}
		}
		senao{
			escreva("Conta inválida\n")
		}
		leia(lixo)
	}

	funcao depositar(inteiro numero_conta, real valor){
		cadeia lixo
		se(numero_conta >= 1001 e numero_conta <= 1050)
		{
			se(valor > 0){
				se(contas[numero_conta - 1001]){
					saldos[numero_conta-1001] += valor
					escreva("N° Conta: ", numero_conta, "\n")
					escreva("Saldo: ", saldos[numero_conta-1001], "\n")
				}
				senao{
					escreva("Conta não existe\n")
				}
			}
			senao{
				escreva("Valor inválido\n")
			}
		}
		senao{
			escreva("Conta inválida\n")
		}
		leia(lixo)
	}

	funcao sacar(inteiro numero_conta, real valor){
		cadeia lixo
		se(numero_conta >= 1001 e numero_conta <= 1050)
		{
			se(valor > 0){
				se(contas[numero_conta - 1001]){
					se(saldos[numero_conta-1001] - valor >= 0){
					saldos[numero_conta-1001] -= valor
					escreva("N° Conta: ", numero_conta, "\n")
					escreva("Saldo: ", saldos[numero_conta-1001], "\n")
					}
					senao{
						escreva("Saldo insuficiente\n")
					}
				}
				senao{
					escreva("Conta não existe\n")
				}
			}
			senao{
				escreva("Valor inválido\n")
			}
		}
		senao{
			escreva("Conta inválida\n")
		}
		leia(lixo)
	}

	funcao fechar_conta(inteiro numero_conta){
		cadeia lixo
		se(numero_conta >= 1001 e numero_conta <= 1050){
			se(contas[numero_conta-1001]){
				contas[numero_conta-1001] = falso
				saldos[numero_conta-1001] = 0.0
				escreva("Conta fechada com sucesso\b")
			}
			senao{
				escreva("Conta já ta fechada\n")
			}
		}
		senao{
			escreva("Conta inválida\n")
		}
		leia(lixo)
	}

	funcao imprimir_contas(){
		inteiro i
		cadeia lixo
		para(i = 0; i < 50; i++){
			se(contas[i]){
				escreva("N° Conta: ", i+1001, "\n")
				escreva("Saldo: ", saldos[i], "\n\n")
			}
		}
		leia(lixo)
	}
	
	funcao inicio()
	{
		inteiro i
		cadeia escolha_usuario
		real valor
		inteiro conta
		
		para(i = 0; i < 50; i++){
			saldos[i] = 0.0
			contas[i] = falso
		}

		faca{
			limpa()
			escreva("O - Abrir conta\n")
			escreva("B - Consultar saldo\n")
			escreva("D - Depositar\n")
			escreva("W - Saque\n")
			escreva("C - Fechar conta\n")
			escreva("P - Imprimir todas as contas\n")
			escreva("E - Fechar conta\n")
			escreva("Escolha: ")
			leia(escolha_usuario)
			escolha_usuario = text.caixa_alta(escolha_usuario)

			se(escolha_usuario == "O"){
				escreva("Digite o valor para ser depositado: ")
				leia(valor)
				abrir_conta(valor)
			}
			senao se(escolha_usuario == "B"){
				escreva("Digite o N° da conta: ")
				leia(conta)

				consultar_saldo(conta)
			}
			senao se(escolha_usuario == "D"){
				escreva("Digite o Nº da conta: ")
				leia(conta)
				escreva("Digite o valor do deposito: ")
				leia(valor)

				depositar(conta, valor)
			}
			senao se(escolha_usuario == "W"){
				escreva("Digite o Nº da conta: ")
				leia(conta)
				escreva("Digite o valor do saque: ")
				leia(valor)

				sacar(conta, valor)
			}
			senao se(escolha_usuario == "C"){
				escreva("Digite o N° da conta: ")
				leia(conta)

				fechar_conta(conta)
			}
			senao se(escolha_usuario == "P"){
				imprimir_contas()
			}
			senao se(escolha_usuario == "E"){
				escreva("Fechando software\n")
			}
		}enquanto(escolha_usuario != "E")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 4062; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {saldos, 5, 6, 6}-{contas, 6, 8, 6};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */