num = int(input("Enter a number: "))
hexa_digits = []
while num > 0:
    remainder = num % 16
    if remainder < 10:
        hexa_digits.append(48 + remainder) # ASCII value for 0 is 48
    else:
        hexa_digits.append(55 + remainder) # ASCII value for A is 65 if the remainder is 10, so we add 55 to get the correct ASCII value 
    num //= 16

for i in range(len(hexa_digits)-1, -1, -1):
    print(chr(hexa_digits[i]), end="")

    # using built-in function 
num = int(input("\nEnter a number: "))
hexa = hex(num)[2:] # [2:] to remove the '0x' prefix
print("Hexadecimal representation: ", hexa.upper())  # .upper() to convert the hexadecimal string to uppercase letters  