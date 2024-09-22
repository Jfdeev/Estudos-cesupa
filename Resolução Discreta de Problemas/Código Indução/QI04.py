def Q04(n:int):
    le = 2 ** (2*n) - 1

    if le%3 == 0:
        print(f"le: {le}%3 = 0")
        return True
    else:
        print("Hipótese inválida")
        return False


if __name__ == "__main__":
    n = int(input("Digite a quantidade de teste: "))

    for i in range(1, n+1):
        if(not Q04(i)):
            break