def Q01(num):
    for num in range(1,26):
        le = 2/3**num
        ld = 1-(1/3)**num
        if(le==ld):
            print(f"le: {le} \t ld: {ld}")
            return True
        else:
            print("Hipotese Invalida!")
            return False

resultado = Q01(3)
print(resultado)

