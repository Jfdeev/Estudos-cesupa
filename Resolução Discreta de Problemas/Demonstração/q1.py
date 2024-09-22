import math

i = 1
while True:
    if(math.factorial(i) > i**2):
        print(f"Contra exemplo em {i}")
        print(f"Fact: {math.factorial(i)}")
        print(f"Quadradp: {i**2}")
        break
    i += 1