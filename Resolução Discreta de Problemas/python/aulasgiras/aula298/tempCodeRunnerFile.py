def P(n):
    if n == 1:
        return 3
    elif n == 2:
        return 5
    elif n > 2:
        return (n-1)*P(n-1)+(n-2)*P(n-2)
    
entrada = int(input("digite um numero"))

print(f"resultado igual {P(entrada)}")