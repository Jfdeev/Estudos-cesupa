def P(n:int):
    try:
        if n == 1:
            return 1
        elif n > 1:
            return (n**2)*P(n-1) + (n-1)
        else:
            raise ValueError
    except ValueError:
        print("Para a função é necessário um número positivo!")
        return None
    except TypeError:
        print("Para a função é necessário um número!")
        return None
    
if __name__ == "__main__":
    for i in range(1, 11):
        print(f"n = {i} \t P({i}) = {P(i)}")