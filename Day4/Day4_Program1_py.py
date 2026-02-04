option= int(input("Enter 1 for Celsius to Fahrenheit  conversion \nEnter 2 for Fahrenheit to Celsius conversion: "))
if option == 1:
    celsius = float(input("Enter temperature in Celsius: "))
    fahrenheit = (celsius * 9/5) +32
    print(f" {celsius} degree Celsius is equal to {fahrenheit} degree Fahrenheit")
elif option == 2:
    fahrenheit = float(input("Enter temperature in Fahrenheit: "))
    celsius = (fahrenheit - 32) * 5/9
    print(f" {fahrenheit} degree Fahrenheit is equal to {celsius} degree Celsius")