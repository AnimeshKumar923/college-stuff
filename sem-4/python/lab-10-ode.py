import numpy as np
import matplotlib.pyplot as plt
# import scipy as sp
from scipy import integrate

# solve_ivp -> intial value problem (value of x and y is given)
# solve_bvp -> boundary value problem
# x = 1; y = 1

# dy/dt = f(t,y)

def f(t, r):
    x, y = r
    fx = np.cos(y)
    fy = np.sin(x)
    return fx, fy;

rs = integrate.solve_ivp(f, (0, 10), (1, 1), t_eval=np.linspace(0, 10, 100))
x, y = rs.y

plt.plot(x, y)
plt.show()