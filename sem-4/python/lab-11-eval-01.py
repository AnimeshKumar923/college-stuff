'''
1. WAP on optimization with inequality constraints using python and also plot a graph using matplotlib
'''

# WAP on optimization with equality and inequality constraints using python
import scipy.optimize as opt;
import numpy as np
import matplotlib.pyplot as plt


# f = 4*x**2 + 3*x - 10 ;

def f(x):
    return 4*x**2 + 3*x - 10;

result = opt.fmin(f, 5);
# print(result)

result2 = opt.fminbound(f, 1, 5)
# print(result2);


def main_func(x):
    return x[0]**2 + x[1]**3;

def uneq_func(x):
    return x[0] + x[1]

intial_guess = [0.5, 0.5]
const = [{'type':'ineq', 'fun':uneq_func}]

# from scipy.optimize import minimize;
result3 = opt.minimize(main_func, intial_guess, constraints=const)
print('Optimized results: ', result3.x)
print('Optimized values: ', result3.fun)

# Plot the solution
x_vals = np.linspace(-5, 5, 400)
plt.plot(x_vals, f(x_vals), label='f(x) = 4*x**2 + 3*x - 10')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Plot of f(x)')
plt.legend()
plt.show()
# plt.axhline(0, color='black', linestyle='--')  # Add horizontal line at y=0
# plt.scatter(result, f(result), color='red', label='Minimum found by opt.fmin')
# plt.scatter(result2, f(result2), color='green', label='Minimum found by opt.fminbound')