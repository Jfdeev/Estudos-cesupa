def P(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    elif n == 3:
        return 3
    elif n > 3:
        return P(n-1)+2*P(n-2)+3*P(n-3)
    
entrada = int(input("digite um numero"))

print(f"resultado igual {P(entrada)}")