number = int(input("Enter a numbe: "))
fact = 1

# using for loop to calculate factorial 
for i in range(number, 1,-1):
    fact *= i
print(f"The factorial of {number} is {fact}")

# using while loop to calculate factorial 
# i = number
# while i > 1:
#     fact *= i
#     i -= 1
# print(f"The factorial of {number} is {fact}")

# using recursion to calculate factorial 
# def factorial(number):
#     if number == 0 or number == 1:
#         return 1
#     else: 
#         return number * factorial(number-1)