### Na área de saúde, a inteligência artificial (IA) é usada para analisar grandes volumes de dados e ajudar na tomada de decisões clínicas. 
# Suponha que um hospital esteja utilizando IA para monitorar e diagnosticar pacientes com base em certos biomarcadores, 
# que são representados por conjuntos de números inteiros.

#O hospital coleta dados sobre diferentes níveis de biomarcadores em pacientes. Esses biomarcadores são categorizados em três conjuntos de números inteiros:

#- A: Conjunto de pacientes com níveis de biomarcadores normais.
#- B: Conjunto de pacientes com níveis de biomarcadores alterados, o que pode indicar um possível problema de saúde.
#- C: Conjunto de pacientes que receberam um tratamento específico e precisam ser monitorados para verificar a eficácia do tratamento.
#1. Determine o conjunto de pacientes que têm níveis normais ou alterados de biomarcadores, ou seja, aqueles que devem ser monitorados por qualquer motivo.
#2. Identifique os pacientes que têm níveis de biomarcadores alterados e que também estão sob tratamento. Esses pacientes podem estar em risco e precisam de atenção especial.
#3. Confirme se todos os pacientes que estão sob tratamento (conjunto 𝐶 ) também têm níveis alterados de biomarcadores (conjunto 𝐵 ). Isso ajudará a identificar se todos os tratamentos estão sendo aplicados corretamente.

#OBS:

#Conjuntos:

#- A = {1, 2, 3, 4, 5} (pacientes com níveis normais)
#- B = {3, 4, 5, 6, 7} (pacientes com níveis alterados)
#- C = {4, 5, 6} (pacientes sob tratamento)


# Conjuntos de pacientes
A = {1, 2, 3, 4, 5}  # Pacientes com níveis normais
B = {3, 4, 5, 6, 7}  # Pacientes com níveis alterados
C = {4, 5, 6}        # Pacientes sob tratamento

# 1. União: Pacientes com níveis normais ou alterados
pacientes_uniao = A | B
print("Pacientes com níveis normais ou alterados:", pacientes_uniao)

# 2. Interseção: Pacientes com níveis alterados e sob tratamento
pacientes_intersecao = B & C
print("Pacientes com níveis alterados e sob tratamento:", pacientes_intersecao)

# 3. Diferença: Pacientes com níveis normais que estão sob tratamento
pacientes_diferenca = A - C
print("Pacientes com níveis normais sob tratamento:", pacientes_diferenca)

# 4. Subconjunto: Verificando se todos os pacientes sob tratamento têm níveis alterados
subconjunto = C <= B
print("Todos os pacientes sob tratamento têm níveis alterados?", subconjunto)