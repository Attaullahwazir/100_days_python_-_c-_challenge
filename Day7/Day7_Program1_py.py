num = int(input("Enter a number: "))
new_num = num # To preserve the original number for later comparison
reverse = 0
while num > 0:
    last_digit = num % 10
    reverse = (reverse * 10) + last_digit
    num //= 10

if reverse == new_num:
    print(f"{new_num} is a palindrome {reverse} number..")
else:
    print(f"the {new_num} is not a palindrome {reverse} number..")