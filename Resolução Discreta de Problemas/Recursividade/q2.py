def T(n:int):
    if n == 1:
        return 1
    else:
        return T(n-1) + 3

def T1(n:int):
    resul = 1
    for i in range(n-1):
        resul += 3
    return resul

if __name__ == "__main__":
    num = int(input("Digite um valor: "))

    for i in range(1, num+1):
        print(f"T({i}) = {T(i)}")
    
    print(T1(num))