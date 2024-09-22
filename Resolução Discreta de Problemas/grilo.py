def Populacao(n:int):

    if n == 1:
        return 5000
    else:
        return Populacao(n-1) * 3 + 5000

if __name__ == "__main__":
    n = int(input("Digite a quantidade de teste da população do grilo: "))
    resultado = Populacao(n)
    print(resultado)