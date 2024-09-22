def p(n):
    # Caso base
    if n == 1:
        return 3
    elif n == 2:
     return 5
    # Chamada recursiva
    return (n-1) * p(n-1) + (n-2) * p(n-2)

# Testar o algoritmo
n = int(input("Digite o valor de n: "))
print(f"p({n}) = {p(n)}")

def Bacteria(t:int):
   if t == 0:
      return 50000
   else:
      return 3*Bacteria(t-1)
      

t = int(input("Digite o valor de t: "))
print(Bacteria(t))
   

a = {1,2}
b = {2,3}
c = {1,3,4}
d = {1,2,3,4}

print(a.union(d))
print(b.issubset(c))
print(a.issubset(b) - a.intersection(c))