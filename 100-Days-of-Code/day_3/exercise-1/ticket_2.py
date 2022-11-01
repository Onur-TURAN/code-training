print("Hello, Welcome to rollercoaster!")
height = int(input("What is your height"))

if height >= 120:
    print ("Yes! You can ride!")
    age = int(input("how old are you? "))
    if age < 12:
        print ("You are free pay")
    elif age <= 18:
              print("You must pay 5$")
    elif age > 18: 
              print("You must pay 35$")              
else:
    print("No! You can't ride!")
