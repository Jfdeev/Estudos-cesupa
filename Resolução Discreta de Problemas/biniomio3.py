def contar_digito(N, K):
    if N == 0:
        return 0
    
    ultimo_digito = N % 10
    if ultimo_digito == K:
        return 1 + contar_digito(N // 10, K)
    else:
        return contar_digito(N // 10, K) 

# Exemplo de uso
N = 762021192
K = 2
ocorrencias = contar_digito(N, K)
print(f"O dígito {K} ocorre {ocorrencias} vezes em {N}.")