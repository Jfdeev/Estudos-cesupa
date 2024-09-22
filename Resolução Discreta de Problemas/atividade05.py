import math
from pickle import TRUE



i = 1

while TRUE : 

    if(i**2 > math.factorial(i)):

        print(f"Contra-exemplo em {i}")

        break

    i += 1