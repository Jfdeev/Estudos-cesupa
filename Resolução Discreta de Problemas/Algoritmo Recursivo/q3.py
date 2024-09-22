def T(n:int):
    if n >= 1 and n <= 3:
        return n
    else:
        return T(n-1) + 2*T(n-2) + 3*T(n-3)
    

if __name__ == "__main__":
    for i in range(1, 11):
        print(f"n = {i} \t T({i}) = {T(i)}")