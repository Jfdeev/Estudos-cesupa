def Q03(n:int):
    le = 0
    ld = 0

    ld = math.factorial(n)
    le = 2**n

    if le < ld:
        print(f"le: {le} \t ld: {ld}")
        return True
    else:
        print("Hipótese inválida")
        return False


if __name__ == "__main__":
    import math

    n = int(input("Digite a quantidade de teste: "))
    
    for i in range(4, n+1):
        if(not Q03(i)):
            break