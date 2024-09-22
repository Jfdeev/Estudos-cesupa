#Demonstre que $n^2 + n + 17$ é primo para 𝑛 = 0 , 1 , 2 , 3. Use Python.
def eh_primo(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def verifica_primos_exaustiva():
    resultados = []
    for n in range(4):
        resultado = eh_primo(n**2 + n + 41)
        resultados.append((n, resultado))
    return resultados

# Testando para n = 0, 1, 2, 3
resultados = verifica_primos_exaustiva()
for n, res in resultados:
    print(f"Para n = {n}, n^2 + n + 41 é primo: {res}")