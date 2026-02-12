num = int(input("Enter a number: "))

# first method solution using for loop 
print("\n\n first method usig for loop...")
for i in range(1, num + 1):
    multi = i * i
    print(multi, end=" ")

# second method solution using while loop
print("\n\n second method usig while loop...")
i = 1
while i <= num:
    multi = i * i
    print(multi, end=" ")
    i += 1

# third method solution from specific start to end
print("\n\n third method usig for loop from specific start to end...")
start = int(input("\n\n Enter the start number: "))
end = int(input("Enter the end number: "))
for i in range(start, end + 1):
    multi = i * i 
    print(multi, end=" ")


