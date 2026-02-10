num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

for i in range(1, num1, 1):
    if num1 % i == 0 and num2 % i == 0:
        gcd = i
print("Finding GCD without using function:")
print("The GCD of ", num1, "and", num2, "is ", gcd)



# using function to find GCD
def find_gcd(num1, num2):
    for i in range(1,num1, 1):
        if num1 % i == 0 and num2 % i == 0:
            gcd = i
    return gcd
result= find_gcd(num1, num2)
print("Finding GCD using function:")
print(f"The GCD of {num1} and {num2} is {result}")
