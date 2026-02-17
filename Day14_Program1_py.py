num = int(input("Enter a number: "))
binary = 0
place = 1
while num > 0:
    remainder = num % 2
    binary += remainder * place
    place *= 10
    num //= 2
print("Binary representation: ", binary)

# using built-in function
num = int(input("Enter a number: "))
binary = bin(num)[2:] # [2:] to remove the '0B' prefix
print("Binary representation: ", binary)