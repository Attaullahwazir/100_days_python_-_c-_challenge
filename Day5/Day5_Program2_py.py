number = int(input("Enter a number: "))

# first method with formula 
natual_number = (number * (number + 1)) // 2
print(f"The sum of first {number} natural numbers is: {natual_number}")

# second method without formaula 
sum = 0
for i in range(1, number + 1):
    sum += i
print(f"The sum of first {number} natural numbers is: {sum}")
