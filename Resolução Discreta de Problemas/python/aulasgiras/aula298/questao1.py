def P(n):
    if n == 1:
        return 1
    elif n > 1:
        return n**2*P(n-1)+(n-1)
    
entrada = int(input("digite um numero"))

print(f"resultado igual {P(entrada)}")