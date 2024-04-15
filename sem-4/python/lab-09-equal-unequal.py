# WAP on optimization with equality and inequality constraints using python
import scipy.optimize as opt;
import numpy as np
import matplotlib.pyplot as mp


# f = 4*x**2 + 3*x - 10 ;

def f(x):
    return 4*x**2 + 3*x - 10;

result = opt.fmin(f, 5);
# print(result)

result2 = opt.fminbound(f, 1, 5)
# print(result2);


def main_func(x):
    return x[0]**2 + x[1]**3;

def eq_func(x):
    return x[0] + x[1] - 1;

def uneq_func(x):
    return x[0] + x[1]

intial_guess = [0.5, 0.5]
const = [{'type':'eq', 'func':eq_func},
         {'type':'ineq', 'func':uneq_func}]

from scipy.optimize import minimize;
result3 = minimize(main_func, intial_guess, constraints=const)
print('Optimized results: ', result3.x)
print('Optimized values: ', result3.func)