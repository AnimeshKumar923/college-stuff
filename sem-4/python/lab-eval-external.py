import numpy as np
import numpy as np
from scipy.optimize import minimize
import matplotlib.pyplot as plt

# Define the objective function
def objective(x):
    return x**2 + 10*np.sin(x)

# Initial guess
x0 = 0

# Perform minimization
result = minimize(objective, x0)

# Print the result
print("Minimum value:", result.fun)
print("Optimal solution:", result.x)

# Plot the function
x = np.linspace(-10, 10, 100)
y = objective(x)
plt.plot(x, y)
plt.xlabel('x')
plt.ylabel('f(x)')
# plt.plot(result.x, result.fun, 'ro')