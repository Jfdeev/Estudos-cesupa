def Ex02():
    for i in range(1, 10000000):
        if(i%6 == 0):
            if(i%3 == 0):
                print(f"{i}/6 = {i/6}")
                print(f"{i}/3 = {i/3}")
                print(" ")
            else:
                print("### FALSO ###")
                print(f"{i}/6 = {i/6}")
                print(f"{i}/3 = {i/3}")


if __name__ == "__main__":
    # MAIN DO CÓDIGO
    Ex02()