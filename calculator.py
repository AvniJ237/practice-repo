import math
operator = input("""Enter 1 to find sum
2 to find difference
3 to find product
4 to find result of division:
5 to find power
6 to find quotient
7 to find remiander
8 to find cosine
9 to find sine
10 to find tangent
11 to find inverse
12 to find square root
13 to find logarithm
14 to find factorial
15 to find exponent power""")
if operator != "14":
    a = float(input("Enter first number: "))
else:
    a = int(input("Enter first number: "))
if operator in ["1","2","3","4","5","6","7"]:
    b = float(input("Enter second number: "))
if operator == "1":
    print("Result:", a + b)
elif operator == "2":
    print("Result:", a - b)
elif operator == "3":
    print("Result:", a * b)
elif operator == "4":
    if b!= 0:
        print("Result:", a / b)
    else:
        print("cant divide with zero")
elif operator == "5":
    print("Result:", a ** b)
elif operator == "6":
    if b!= 0:
        print("Result:", a // b)
    else:
        print("cant divide with zero")
elif operator == "7":
    if b!= 0:
        print("Result:", a % b)
    else:
        print("cant divide with zero")
elif operator == "8":
    print("Result:", math.cos(a))
elif operator == "9":
    print("Result:", math.sin(a))
elif operator == "10":
    print("Result:", math.tan(a))
elif operator == "11":
    if a != 0:
        print("Result:", 1/a)
    else:
        print("Cant divide by zero")
elif operator == "12":
    if a >= 0:
        print("Result:", math.sqrt(a))
    else:
        print("Cant find square root of a negative number")
elif operator == "13":
    if a > 0:
        print("Result:", math.log(a))
    else:
        print("Logarithm only works for positive numbers")
elif operator == "14":
    if a >= 0:
        print("Result:", math.factorial(a))
    else:
        print("Factorial only works for non-negative integers")
elif operator == "15":
    print("Result:", math.exp(a))
else:
    print("Invalid operator")

