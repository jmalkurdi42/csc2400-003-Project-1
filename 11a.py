# File: 11a.Py
# Author: Jamal Alkurdi
# Date: 10/8/2023
# Objective: Implement Extended Euclid Algorithm using Python
# License: Python 3.12.0

import sys
sys.setrecursionlimit(3000)

# Mathematic function that finds GCD using E.E.A.
def exalgo(m, n):
    if (m == 0):
        return (n), 0, 1
    g, num1, num2 = exalgo(n%m,m)

    x = num2
    y = num1 - num2 * (m//n)
    
    return g, x, y

# Function takes 2 inputs, and outputs results in accordance with E.E.A
print("To find GCD Using Extended Euclid Algorithm, input 2 numbers with the 1st being >= the 2nd")

# Takes in 2 inputs.
input1 = input()
input2 = input()

# Converts the user input from string to float
x = int(float(input1))
y = int(float(input2))

# In the case the number is negative, it is converted to positive using the abs() function
m = abs(x)
n = abs(y)

# Passes the absolute value of the 2 user inputs into the function exalgo, and assigns the result to g.
g, m, n = exalgo(m, n)

# If GCD = 0, display "Undefined"
if (g == 0):
    print("GCD(",x,",",y,") =", "Undefined")
# Displaying GCD using E.E.A
else:
    print("GCD(",x,",",y,") =",g)