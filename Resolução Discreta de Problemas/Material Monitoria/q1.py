#Demonstre que a soma de dois números ímpares é sempre par. 
#Para isso, escreva uma função em Python que recebe dois números ímpares e verifica se a soma deles é par.  

def eh_impar(n):
    return n % 2 != 0

def soma_ímpares(a, b):
    soma = a + b
    return soma, soma % 2 == 0
    
a, b = 7, 9
soma, resultado = soma_ímpares(a, b)
print(f"A soma de {a} e {b} é {soma}, que {'é' if resultado else 'não é'} par.")
