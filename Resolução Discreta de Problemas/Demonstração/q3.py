def verificar_soma_par(num1, num2):
    # Verifica se ambos os números são ímpares
    if num1 % 2 != 0 and num2 % 2 != 0:
        soma = num1 + num2
        if soma % 2 == 0:
            return f"A soma de {num1} e {num2} é {soma}, que é par."
        else:
            return f"A soma de {num1} e {num2} é {soma}, que é ímpar (mas isso não deveria acontecer)."
    else:
        return "Ambos os números precisam ser ímpares."

# Exemplo de uso
resultado = verificar_soma_par(3, 5)
print(resultado)