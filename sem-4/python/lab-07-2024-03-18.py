import numpy as np
import matplotlib.pyplot as plt

def f(x):
    # Define the function to be integrated
    return np.sin(x)

def simpsons_method(a, b, n):
    """
    Compute the integral of f(x) from a to b using Simpson's method with n intervals.
    """
    if n % 2 != 0:
        raise ValueError("Number of intervals must be even.")
    
    h = (b - a) / n
    x = np.linspace(a, b, n+1)
    y = f(x)
    
    integral = y[0] + y[-1]  # Initial and final terms
    
    for i in range(1, n, 2):  # Odd terms
        integral += 4 * y[i]
        
    for i in range(2, n-1, 2):  # Even terms
        integral += 2 * y[i]
        
    integral *= h / 3
    
    return integral

# Define the interval [a, b] and the number of intervals n
a = 0
b = np.pi
n = 10

# Compute the integral using Simpson's method
integral = simpsons_method(a, b, n)
print("Approximation of integral using Simpson's method:", integral)

# Plotting
x_values = np.linspace(a, b, 100)
y_values = f(x_values)

plt.plot(x_values, y_values, label='f(x) = sin(x)')
plt.fill_between(x_values, y_values, alpha=0.2)
plt.title("Function and Integration Area")
plt.xlabel("x")
plt.ylabel("f(x)")
plt.legend()
plt.grid(True)
plt.show()