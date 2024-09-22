#Demonstre que se o quadrado de um número é ímpar, então o número também é ímpar. 
#Escreva uma função em Python que verifica se, dado que $n^2$ é ímpar, então 𝑛 também é ímpar.
def eh_impar(n):
    return n % 2 != 0

def verifica_contraposição(n):
    return eh_impar(n**2) == eh_impar(n)

# Testando a contraposição
n = 5
resultado = verifica_contraposição(n)
print(f"Se {n}^2 é ímpar, então {n} é ímpar: {resultado}")
