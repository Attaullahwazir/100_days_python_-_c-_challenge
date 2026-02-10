num1 = int(input("Enter the first number to find lcm: "))
num2 = int(input("Enter the second number to find lcm: "))

# method 1
for i in range(1, num1 * num2 + 1, 1):
    if i % num1 == 0 and i % num2 == 0:
        lcm = i
        break
print("Finding LCM without using function: ", lcm)

# method 2
# using formula to find LCM
for i in range(1, num1, 1):
    if num1 % i == 0 and num2 % i == 0:
        gcd = i
lcm = (num1 * num2) // gcd
print("Finding LCM using formula: ", lcm)

# method 3 
# using function to find LCM
def find_gcd(num1, num2):
    for i in range(1, num1 + 1,  1):
        if num1 % i == 0 and num2 % i == 0:
            gcd = i
    return gcd 

def find_lcm(num1, num2):
    gcd = find_gcd(num1, num2)
    lcm = (num1 * num2) // gcd
    return lcm
result = find_lcm(num1=num1, num2=num2)
print("Finding LCM using function: ", result)