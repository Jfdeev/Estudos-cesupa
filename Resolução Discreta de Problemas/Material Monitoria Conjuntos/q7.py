### Uma universidade deseja gerenciar os alunos matriculados em dois cursos, Matemática e Física. O conjunto 𝑀  
# representa os alunos matriculados em Matemática, e o conjunto 𝐹  representa os alunos matriculados em Física.
# A universidade deseja saber:

#a)Quantos alunos estão matriculados em pelo menos um dos cursos. 

#b)Quantos alunos estão matriculados em ambos os cursos. 

#c)Quantos alunos estão matriculados em Matemática, mas não em Física.

### Conjuntos da questão 1:

#- M={1,2,3,4,5} (alunos de Matemática)
#- F={4,5,6,7} (alunos de Física)

M = {1, 2, 3, 4, 5}  # Alunos de Matemática
F = {4, 5, 6, 7}     # Alunos de Física

# União (a)
alunos_uniao = M | F
print("Alunos em pelo menos um dos cursos:", alunos_uniao)
print("Número de alunos em pelo menos um dos cursos:", len(alunos_uniao))

# Interseção (b)
alunos_intersecao = M & F
print("Alunos em ambos os cursos:", alunos_intersecao)
print("Número de alunos em ambos os cursos:", len(alunos_intersecao))

# Diferença (c)
alunos_diferenca = M - F
print("Alunos apenas em Matemática:", alunos_diferenca)
print("Número de alunos apenas em Matemática:", len(alunos_diferenca))

