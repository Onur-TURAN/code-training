print("Hello, Welcome to rollercoaster!")
height = int(input("What is your height? "))

if height >=120:
    print("you can ride")
    age = int("how old are you? ")
    if age < 18:
        print("Please pay 8$")
    else:
        print("Please pay 18$")
else:
    print("You can't ride")
