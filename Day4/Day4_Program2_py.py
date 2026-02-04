principle = int(input(" Enter the principle amount: "))
interest_rate = float(input(" Enter the interest rate (in percentage): "))
time_period = int(input(" Enter the time period (in years): "))

simple_interest = (principle * interest_rate * time_period) / 100

print(" The Simple Interest is: ", simple_interest)