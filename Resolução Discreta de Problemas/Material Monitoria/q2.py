#Prove que o quadrado de qualquer número inteiro é sempre maior ou igual a zero.
#Escreva uma função em Python que verifica se o quadrado de um número inteiro é não negativo.

def verifica_quadrado(n):
    quadrado = n ** 2
    return quadrado >= 0

# Testando a propriedade para diferentes valores
valores = [-10, -1, 0, 1, 10]
for n in valores:
    resultado = verifica_quadrado(n)
    print(f"O quadrado de {n} é não negativo: {resultado}")
