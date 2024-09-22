#intervalo de 2 horas vai ser P
def B(n):
    if n == 0:
        return 50000
    elif n > 0:
        return 50000*3**n
    
entrada = int(input("digite um numero\n"))

print(f"resultado igual {B(entrada)}")
    