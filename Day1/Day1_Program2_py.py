value1 = int(input("Enter value 1 for Calculation..."))
opr = input("Enter operator (+, -, *, /): ")
value2 = int(input("Enter value 2 for Calculation..."))
result = 0
if opr == "+":
    result = value1 + value2
    print(f"Result of {value1} + {value2} = {result}")
elif opr == "-":
    result = value1 - value2
    print(f"Result of {value1} - {value2} = {result}")
elif opr == "*":
    result = value1 * value2
    print(f"Result of {value1} * {value2} = {result}")
elif opr == "/":
    if value2 != 0:
        result = value1 / value2
        print(f"Result of {value1} / {value2} = {result}")
    else:
        print("Error: Division by zero is not allowed.")

