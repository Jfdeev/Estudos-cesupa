def L(n:int):
    if n == 1:
        return 1
    elif n == 2:
        return 3
    else:
        return L(n-1) + L(n-2)
    

if __name__ == "__main__":
    for i in range(1, 11):
        print(f"n = {i} \t L({i}) = {L(i)}")