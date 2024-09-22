#emonstre que $6$ é um número perfeito (a soma dos divisores próprios de $6$ é igual a $6$). 
#Escreva uma função em Python que verifica se 6 é um número perfeito. Faça uma verificação exaustiva para todos os divisores de 6.

def soma_divisores(n):
    divisores = [i for i in range(1, n) if n % i == 0]
    return sum(divisores)

def eh_perfeito(n):
    return soma_divisores(n) == n

# Verificando se 6 é um número perfeito
n = 6
resultado = eh_perfeito(n)
print(f"O número {n} {'é' if resultado else 'não é'} perfeito.")
