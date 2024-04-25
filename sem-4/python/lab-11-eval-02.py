'''
2. Implementing numerical integration, Simpsons' rule 1/3, also plot graph using matplotlib
'''

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


def f(x):
    # return x**2 # Example function, you can replace it with any
    return 3*x**3+2*x-x-10 # Example function, you can replace it with any
a=0 # Lower limit of integration
b=2 # Upper limit of integration
n=4 # Number of sub-intervals

# integral_approx=simpsons_one_third_rule(f,a,b,n)
integral_approx=simpsons_one_third_rule(f,a,b,n)
print('Approximation of the integral: ', integral_approx)
x_val=np.linspace(a,b,100)
mp.plot(x_val, f(x_val), label='$x^2$ function')
mp.fill_between(x_val, f(x_val), alpha=0.2, label='Area under the curve')
mp.title('Numerical Integration Experiment')
mp.xlabel('x')
mp.ylabel('y')
mp.legend()
mp.show()