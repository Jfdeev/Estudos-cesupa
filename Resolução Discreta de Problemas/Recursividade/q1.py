def S(n:int):
    if n == 1:
        return 2
    else:
        return 2*S(n-1)

def S1(n:int):
    resul = 1
    for i in range(n):
        resul *= 2

    return resul

if __name__ == "__main__":
    num = int(input("Digite um número: "))

    print(S(num))
    print(S1(num))