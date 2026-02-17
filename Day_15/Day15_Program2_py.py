principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the interest rate (as a percentage): "))
time = float(input("Enter the time in years:"))
n = float(input("Enter the number of times interest is compounded per year: "))
interest_decimal = rate / 100
total_amount = principal * (1 + interest_decimal / n)** (n * time) 
print(f"The total amount after {time} years is: {total_amount}")
print(f"The interest earned is: {total_amount - principal}")

