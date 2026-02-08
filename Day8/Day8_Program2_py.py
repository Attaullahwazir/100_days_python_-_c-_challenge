num = int (input("Enter a number: "))
first = 0
second = 1
for i in range(0, num):
    print(first, end=" ")
    next = first + second
    first = second
    second = next 

