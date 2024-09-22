def Q01(n:int):
    ld = 1-(1/3)**n

    for i in range(2, n+1):
        le = 3/2**n
 
    if le == ld:
        print(f"le: {le} \t ld: {ld}")
        return True
    else:
        print("Hipótese inválida")
        return False


if __name__ == "__main__":
    n = int(input("Digite a quantidade de teste: "))

    for i in range(2, n+1):
        if(not Q01(i)):
            break