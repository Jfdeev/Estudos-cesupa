for i in range(1, 21):

    if(i%6 == 0):

        if(i%3 == 0):

            print(f"{i}: Divisível por 6 e 3")

        else:

            print(f"{i}: Divisível por 6 e não por 3")

    else:

        if(i%3 == 0):

            print(f"{i}: Não divisível por 6 e divisível por 3")

        else:

            print(f"{i}: Não Divisível por 6 e 3")