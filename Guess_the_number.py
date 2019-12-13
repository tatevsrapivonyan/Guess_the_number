import random


def guess_the_number():
    secret_number = random.randint(1, 20)
    i = 0

    while i < 6:
        users_number = input("Enter your number: ")
        while True:
            if not users_number.isdecimal():
                users_number = input("Wrong number format. Enter a number.")
            else:
                break
        users_number = int(users_number)
        if users_number == secret_number:
            print("Congratulations! You won.")
        else:
            print("OOPS. Wrong number. Try again...")
        i = i + 1
    print("Game over! The real number was ", secret_number, ".")


guess_the_number()
