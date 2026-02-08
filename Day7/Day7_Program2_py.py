num = int (input("Enter a number: "))
new_num = num # to preserve the original number for later comparison
sum = 0
while num > 0:
    last_digit = num % 10
    sum += last_digit**3
    num //= 10
if sum == new_num:
    print(f"{new_num} is an Armstrong {sum} number..")
else:
    print(f"the {new_num} is not an Armstrong number..")