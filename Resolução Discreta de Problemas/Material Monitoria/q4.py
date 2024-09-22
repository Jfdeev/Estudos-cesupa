#Demonstre que se um número 𝑛 não é múltiplo de 3, então $n^2$  também não é múltiplo de 3. use Python.

def eh_multiplo_de_3(n):
    return n % 3 == 0

def verifica_contraposição_3(n):
    return not eh_multiplo_de_3(n) and not eh_multiplo_de_3(n**2)
n = 4
resultado = verifica_contraposição_3(n)
print(f"Se {n} não é múltiplo de 3, então {n}^2 também não é múltiplo de 3: {resultado}")
