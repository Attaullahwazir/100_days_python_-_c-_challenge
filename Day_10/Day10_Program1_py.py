num = int(input("Enter a number: "))

sum = 0
while num > 0:
    last_digit = num % 10  # get the last digit
    sum += last_digit      # add the last digit to the sum
    num //= 10             # remove the last digit
print(f"The sum of the digits is: {sum}")