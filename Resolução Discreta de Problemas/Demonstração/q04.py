def Q04(num):
    quadrado = num**2
    if(quadrado >= 0):
        print(f"Todo numero ao quadrado é sempre maior ou igual a zero como neste exemplo: {num} ao quadrado = {num**2}")
    else:
        print("Digite um numero inteiro ou isso é falso")

resultado = Q04(0)
print(resultado)