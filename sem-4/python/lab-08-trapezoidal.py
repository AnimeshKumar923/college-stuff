import numpy as np
import matplotlib.pyplot as plt

def f(x):
    return np.sin(x)

def trapezoidal_rule(a, b, n):
    h = (b - a) / n
    x = np.linspace(a, b, n+1)
    y = f(x)
    integral = h * (np.sum(y) - 0.5 * (y[0] + y[-1]))
    return integral

a = 0  
b = np.pi  
n = 100  

integral = trapezoidal_rule(a, b, n)
print("Approximate integral using trapezoidal rule:", integral)

x_values = np.linspace(a, b, 1000)
y_values = f(x_values)

plt.plot(x_values, y_values, label='sin(x)', color='blue')

for i in range(n):
    x_trap = [a + i * (b - a) / n, a + (i+1) * (b - a) / n]
    y_trap = [f(x_trap[0]), f(x_trap[1])]
    plt.fill_between(x_trap, y_trap, color='orange', alpha=0.3)

plt.title('Numerical Integration using Trapezoidal Rule')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.legend()
plt.grid(True)
plt.show()