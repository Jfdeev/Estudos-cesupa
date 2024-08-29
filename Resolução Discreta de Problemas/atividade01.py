import math

for n in range(1,100):
    fator = math.factorial(n)
    pote = n**2

    if(fator > pote):
        print("CONTRA EXEMPLO")
        print(f"{fator} > {pote}")
        break
    