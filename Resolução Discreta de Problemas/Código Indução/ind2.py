def Exemplo02(n:int):

    a1 = 1

    a2 = 1



    for i in range(3, n+1):

        an = a1 + a2

        a1 = a2

        a2 = an

    

    print(f"a{i} = {an}")

    print(f"(8/5)^({i-2}) = {(8/5) ** (i-2)}")

    print("\n ------------------------------")



if __name__ == "__main__":

    n = int(input("Digite o valor limite do teste (n >= 3): "))

    for i in range(3, n+1):
        Exemplo02(i)