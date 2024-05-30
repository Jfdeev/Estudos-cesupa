programa
{
	
	inteiro loja[12][4]
	inteiro i, j
	inteiro a = 0
	inteiro valores_mes = 0
	inteiro valores_semana = 0
	cadeia lixo
	funcao total_mes(){
		limpa()
		para(i=0;i<12;i++){
			escreva("\ndigite quando vc faturou no mes ", i + 1 ," :  ")
			leia(loja[i][0])
			valores_mes++
		}
		para(i=0;i<valores_mes;i++){
		 escreva("Mes ", a++, ": ", loja[i][0], "\n")
		}
		escreva("\nAperte qualquer botão para voltar ao menu..\n")
		leia(lixo)
		}
		funcao media_mes(){
			limpa()
			inteiro soma = 0
			inteiro media = 0
			se (valores_mes == 0) {
		escreva("Nenhum Valor inserido.\n")
		} senao {
			para (i = 0; i < valores_mes; i++) {
				soma = soma + loja[i][0]
		}
		media = soma / valores_mes
		escreva("A Média de preço dos produtos é ", media)
		}
		escreva("\nAperte qualquer botão para voltar ao menu..\n")
		leia(lixo)
		}
		funcao total_semana(){
			limpa()
		para(i=0;i<12;i++){
			para(j=0;j<4;j++){
				escreva("\ndigite quando vc faturou na semana ", j + 1 ," do mes ", i + 1, " ")
				leia(loja[i][j])
				valores_semana++
			}
		}			para(i=0;i<12;i++){
					para(j=0; j<4;j++){
		 				escreva("\nMes ", i + 1 ," Semana ", j + 1, " : ", loja[i][j])
					}	
			}
					escreva("\nAperte qualquer botão para voltar ao menu..\n")
					leia(lixo)
		}
		funcao media_semana(){
			limpa()
			inteiro soma = 0
			inteiro media = 0
			se (valores_semana == 0) {
		escreva("Nenhum Valor inserido.\n")
		} senao {
				para(j=0; j < 4; j++){
					soma = soma + loja[0][j]
		   }
		     media = soma / valores_semana
			escreva("A Média de preço dos produtos é ", media)
			}
			escreva("\nAperte qualquer botão para voltar ao menu..\n")
			leia(lixo)
		}
		funcao total_ano(){
			inteiro soma = 0
			limpa()
			se(valores_mes == 0 e valores_semana == 0){
				escreva("nenhum valor inserido")
			}senao{
				
			
			para (i = 0; i < 12; i++) {
				para(j=0; j < 4; j++){
					soma = loja[i][j] + loja[i][j]
		      }
		   }
		   escreva("O total arrecadado no ano foi: ", soma)
		}
		
			escreva("\nAperte qualquer botão para voltar ao menu..\n")
			leia(lixo)
	}
	funcao media_ano(){
		limpa()
			inteiro soma = 0
			inteiro media = 0
			se (valores_semana == 0 e valores_mes == 0) {
		escreva("Nenhum Valor inserido.\n")
		} senao {
			para(i=0;i<12;i++){
				para(j=0; j < 4; j++){
					soma = soma + loja[i][j]
		   }
		}
		     media = soma / valores_semana + valores_mes
			escreva("A Média de preço dos produtos é ", media)
			}
			escreva("\nAperte qualquer botão para voltar ao menu..\n")
			leia(lixo)
	}
	funcao inicio()
	{
	
		cadeia escolha_usuario
		limpa()
		faca{
		escreva("Lojinha do jf\n")
		escreva("O - total vendido em cada mes do ano\n")
		escreva("B - Fazer Média das vendas em cada mes do ano\n")
		escreva("D -  Total vendido em cada semana durante todo o ano\n")
		escreva("W - Média do total vendido em cada semana durante todo o ano\n")
		escreva("F - Total vendido no ano\n")
		escreva("A - Média do total vendido no ano\n")
		escreva("C - Sair\n")
		leia(escolha_usuario)
		se(escolha_usuario == "O"){
			total_mes()
		}
		se(escolha_usuario == "B"){
			media_mes()
		}
		se(escolha_usuario == "D"){
			total_semana()
		}
		se(escolha_usuario == "W"){
			media_semana()
		}
		se(escolha_usuario == "F"){
			total_ano()
		}
		se(escolha_usuario == "A"){
			media_ano()
		}
		}enquanto(escolha_usuario != "C")
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 3106; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {loja, 4, 9, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */