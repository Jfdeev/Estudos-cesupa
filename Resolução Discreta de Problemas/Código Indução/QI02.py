def Q02(n:int):
    le = 0
    ld = 0

    ld = 1-(1/3)**n

    for i in range(0, n+1):
        le += i

    if le == ld:
        print(f"le: {le} \t ld: {ld}")
        return True
    else:
        print("Hipótese inválida")
        return False


if __name__ == "__main__":
    n = int(input("Digite a quantidade de teste: "))

    for i in range(0, n+1):
        if(not Q02(i)):
            break