def soma_vetor(v:int):
    # Caso base: Se o vetor estiver vazio ou o tamanho é 0, a soma é 0
    if (len(v) == 1): 
        return v[0]
    else:
        return v[0] + soma_vetor(v[1:])
    
# Exemplo de uso
print(soma_vetor({1, 2, 3, 4}))
print(f"A soma dos valores do vetor é: {soma_vetor}")