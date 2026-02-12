num = int(input("Enter a number: "))

# first method solution using exponent operator
sqr = num ** 0.5
if (sqr * sqr) == num:
    print("Yes. It is a perfect square...")
else:
    print("No. It is not a perfect square...")

# second method solution using pow() function
sqr = pow(num, 0.5)
if (sqr * sqr) == num:
    print("Yes. It is a perfect square...")
else:
    print("No. It is not a perfect square...")