# 🚨 Don't change the code below 👇
age = input("What is your current age? ")
# 🚨 Don't change the code above 👆

#Write your code below this line 👇

age_as_int = int(age)

years_last = 90 - age_as_int
days_last = years_last * 365
weeks_last = years_last * 52
months_last = years_last * 12

print('You have ', days_last, 'days, ', weeks_last, 'weeks, and ', months_last, 'months left.')




