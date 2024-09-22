#Demonstre que $\ao quadrado{5}$  é irracional. use Python para realizar outros testes, com outras raizes
from math import sqrt

def verifica_irracionalidade(racional):
    raiz = sqrt(racional)
    return raiz != int(raiz)
    
racional = 5
resultado = verifica_irracionalidade(racional)
print(f"A raiz quadrada de {racional} {'não é' if resultado else 'é'} racional.")