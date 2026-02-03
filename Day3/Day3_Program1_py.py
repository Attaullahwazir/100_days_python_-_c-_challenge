# we have three different number 3 to proform maximum comparison

num1 = int(input("Enter First number: "))
num2 = int(input("Enter Second number: "))
num3 = int(input("Enter Third number: "))

if num1 > num2 and num1 > num3:
    print(f"Number 1: {num1} is Greater than Number 2: {num2} and Number 3: {num3}")
elif num2 > num1 and num2 > num3:
    print(f"Number 2: {num2} is Greater than Number 1: {num1} and Number 3: {num3}")
elif num3 > num1 and num3 > num2:
    print(f"Number 3: {num3} is Greater than Number 1: {num1} and Number 2: {num2}")
else:
    print("Maybe two or more numbers are equal, or user entered invalid input.")