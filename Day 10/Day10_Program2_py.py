num = int(input("Enter a number: "))

count = 0
while num > 0:
    # last_digit = num % 10      # get the last digit
    #    or 
    num //= 10                 # you can also remove the last digit through that methods
    count += 1

print(f"The number of digits is: {count}")