#Demonstre que a soma dos primeiros 𝑛 n números inteiros positivos não pode ser negativa. Suponha que a soma dos primeiros 𝑛 n números inteiros positivos é negativa e derive uma contradição. 
#Use Python para explorar essa hipótese.
def soma_numeros(n):
    return n * (n + 1) // 2
n = 10
soma = soma_numeros(n)
print(f"A soma dos primeiros {n} números inteiros positivos é {soma}, que {'não pode' if soma >= 0 else 'pode'} ser negativa.")