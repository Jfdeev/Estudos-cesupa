import math

def binomial_coefficient(n, k):
    return math.comb(n, k)

def expand_binomial(a, b, n):
    termos = []
    
    for k in range(n + 1):
        coef = binomial_coefficient(n, k)
        termo_a = f"{a}^{n-k}" if (n-k) != 0 else ""
        termo_b = f"{b}^{k}" if k != 0 else ""
        
        if coef != 1:
            termo = f"{coef}{termo_a}{termo_b}"
        else:
            termo = f"{termo_a}{termo_b}"
        
        termo = termo.replace("^1", "").replace("1*", "")
        
        termos.append(termo)
    
    return " + ".join(termos)

a = "x"
b = "y"
n = 3

expansao = expand_binomial(a, b, n)
print(f"A expansão de ({a} + {b})^{n} é:")
print(expansao)