A = {1,2}
B = {2,3}
C = {1,3,4}
D = {1,2,3,4}

print(A.issubset(D)) #issubset verifica se há um subconjunto no conjunto espeficicado #A c D
print(A.issubset(B))
print(B.issubset(C))
print(B.issubset(D)) 
print(C == D) #verifica se o conjunto C é igual a D
print(not A.issubset(C))  #A /c C



