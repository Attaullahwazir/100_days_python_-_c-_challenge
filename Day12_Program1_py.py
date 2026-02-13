num = int(input("Enter a number: "))
power = int(input("Enter the power: "))

# simple method 
result = num ** power
print(f"the result of {num} raised to the power of {power} is: {result}")


# using for loop 
result = 1
for i in range(1, power + 1):
    result *= num
print(f"the result of {num} raised to the power of {power} is: {result}")

# using while loop 
result = 1
i = 0
while i < power:
    result *= num
    i += 1
print(f"the result of {num} raised to the power of {power} is: {result}")

