def Exemplo01(n:int):
    soma = 0
    eq = ""
    for i in range(1, n+1):
        soma += (2*i - 1)
        eq += f"{2*i - 1} + "
    eq = eq[:-2]

    print(eq + " = " + str(soma))
    print(f"{n}² = {n**2}")
    
    print("\n-------------------")



if __name__ == "__main__":
    for x in range(1, 10):
        Exemplo01(x)