import random
name_string = input("please give me everybody's names, seperated by a comma. ")
names = name_string.split(", ")
number = random.randint(1,100000000000)
print(number)
if ((number-1) > len(names)):
     number = number%len(names)
else:
    number = number
print(names[number]+" is going to buy the meal today!")
print(number)