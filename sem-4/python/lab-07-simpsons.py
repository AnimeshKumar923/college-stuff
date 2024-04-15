# ------------------------------- CHATGPT METHOD START ----------------------------------

# import numpy as np
# import matplotlib.pyplot as plt

# def f(x):
#     # Define the function to be integrated
#     return np.sin(x)

# def simpsons_method(a, b, n):
#     """
#     Compute the integral of f(x) from a to b using Simpson's method with n intervals.
#     """
#     if n % 2 != 0:
#         raise ValueError("Number of intervals must be even.")
    
#     h = (b - a) / n
#     x = np.linspace(a, b, n+1)
#     y = f(x)
    
#     integral = y[0] + y[-1]  # Initial and final terms
    
#     for i in range(1, n, 2):  # Odd terms
#         integral += 4 * y[i]
        
#     for i in range(2, n-1, 2):  # Even terms
#         integral += 2 * y[i]
        
#     integral *= h / 3
    
#     return integral

# # Define the interval [a, b] and the number of intervals n
# a = 0
# b = np.pi
# n = 10

# # Compute the integral using Simpson's method
# integral = simpsons_method(a, b, n)
# print("Approximation of integral using Simpson's method:", integral)

# # Plotting
# x_values = np.linspace(a, b, 100)
# y_values = f(x_values)

# plt.plot(x_values, y_values, label='f(x) = sin(x)')
# plt.fill_between(x_values, y_values, alpha=0.2)
# plt.title("Function and Integration Area")
# plt.xlabel("x")
# plt.ylabel("f(x)")
# plt.legend()
# plt.grid(True)
# plt.show()

# ------------------------------- CHATGPT METHOD END ----------------------------------


# --------------------------- COLLEGE LAB METHOD START -------------------------------

import numpy as np
import matplotlib.pyplot as mp

def simpsons_one_third_rule(f,a,b,n):
    if n%2!=0:
        raise ValueError("No. of sub-intervals must be even")
    h=(b-a)/n
    result = f(a) + f(b)
    for i in range(1,n,2):
        result += 4*f(a+i*h)
    for i in range(2,n-1,2):
        result += 2*f(a+i*h)
    result*=h/3
    return result


def simpsons_three_eight_rule(f,a,b,n):
    if n%2!=0:
        raise ValueError("No. of sub-intervals must be even")
    h=(b-a)/n
    result = f(a) + f(b)
    for i in range(1,n,2):
        result += 4*f(a+i*h)
    for i in range(2,n-1,2):
        result += 2*f(a+i*h)
    result*=(3*h)/8
    return result


def f(x):
    # return x**2 # Example function, you can replace it with any
    return 3*x**3+2*x-x-10 # Example function, you can replace it with any
a=0 # Lower limit of integration
b=2 # Upper limit of integration
n=4 # Number of sub-intervals

# integral_approx=simpsons_one_third_rule(f,a,b,n)
integral_approx=simpsons_three_eight_rule(f,a,b,n)
print('Approximation of the integral: ', integral_approx)
x_val=np.linspace(a,b,100)
mp.plot(x_val, f(x_val), label='$3x^3+2x-x-10$ function')
mp.fill_between(x_val, f(x_val), alpha=0.2, label='Area under the curve')
mp.title('Numerical Integration Experiment')
mp.xlabel('x')
mp.ylabel('y')
mp.legend()
mp.show()

# --------------------------- COLLEGE LAB METHOD END -------------------------------