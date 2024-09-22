#Demonstre que não existem inteiros $a, b, c$ positivos tais que $a^3 + b^3 = c^3$. Escreva um código Python que verifica se a equação $a^3 + b^3 = c^3 $tem soluções inteiras positivas para  $a, b, c$  menores que um determinado valor 𝑛 . 
#Utilize uma abordagem exaustiva para verificar a impossibilidade de tal solução.

def verifica_fermat(n):
    for a in range(1, n):
        for b in range(1, n):
            for c in range(1, n):
                if a**3 + b**3 == c**3:
                    return f"Encontrei uma solução: {a}^3 + {b}^3 = {c}^3"
    return "Nenhuma solução encontrada para n < " + str(n)


n = 100
resultado = verifica_fermat(n)
print(resultado)
