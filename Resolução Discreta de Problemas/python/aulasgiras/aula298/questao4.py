def P(n):
    if n == 1:
        return 1
    elif n == 2:
        return 3
    elif n > 2:
        return P(n-1)+P(n-2)
    
entrada = int(input("digite um numero"))

print(f"resultado igual {P(entrada)}")