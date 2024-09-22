def Q01(n:int):
    le = 0
    ld = 0

    ld = (2*n + 1)*(n + 1)*n/6

    for i in range(0, n+1):
        le += i**2

    if le == ld:
        print(f"le: {le} \t ld: {ld}")
        return True
    else:
        print("Hipótese inválida")
        return False


if __name__ == "__main__":
    n = int(input("Digite a quantidade de teste: "))

    for i in range(0, n+1):
        if(not Q01(i)):
            break