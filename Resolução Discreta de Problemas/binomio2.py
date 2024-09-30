import math

def binomial_coefficient(n, k):
    return math.comb(n, k)

def test_binomial_hypothesis(n_max=100):
    for n in range(n_max + 1):
        left_side = sum(binomial_coefficient(n, k)**2 for k in range(n + 1))
        
        right_side = 3**n
        
        if left_side != right_side:
            print(f"Hipótese falhou para n = {n}. {left_side} != {right_side}")
            return False
        else:
            print(f"Hipótese válida para n = {n}. {left_side} == {right_side}")
    
    print("A hipótese foi confirmada para todos os casos até n =", n_max)
    return True

# Testa a hipótese para os 100 primeiros casos
test_binomial_hypothesis(100)