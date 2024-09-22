def Q05(num):
    quadrado = num**2
    if(quadrado%2 == 0 and num%2 == 0):
        print(f"O quadrado de {num} é par entao sua raiz é par: {quadrado}")
    else:
        print("é falso para esse valor")

resultado = Q05(88)
print(resultado)