def D(n:int):
    if n == 1:
        return 3
    elif n == 2:
        return 5
    else:
        return (n-1)*D(n-1) + (n-2)*D(n-2)
    

if __name__ == "__main__":
    for i in range(1, 11):
        print(f"n = {i} \t D({i}) = {D(i)}")