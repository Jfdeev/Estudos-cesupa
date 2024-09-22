def verifica_divisibilidade_por_3(n):
    
    return (n**3 - n) % 3 == 0

# Verificar para valores de n de 1 até 100
for n in range(1, 101):
    if verifica_divisibilidade_por_3(n):
        print(f"P({n}) = {n**3 - n} é divisível por 3")
    else:
        print(f"P({n}) = {n**3 - n} não é divisível por 3")