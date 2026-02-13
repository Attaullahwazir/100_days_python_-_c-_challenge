num = int(input("Enter a number: "))
sum = 0
if (num < 0):
    print("Number must be positive...")
else:
    for i in range(1, num -1):
        if num % i == 0:
            temp = i
            sum += i
            print(temp, end=" ")
if sum == num: 
    print(" = ",num, "is a perfect number.")
