import numpy as np
import matplotlib.pyplot as plt
# import scipy as sp
from scipy import integrate

# solve_ivp -> intial value problem (value of x and y is given)
# solve_bvp -> boundary value problem
# x = 1; y = 1

# dy/dt = f(t,y)

def f(t, y):
    y = 1
    # fy = np.cos(y)
    fy = np.sin(y)
    return fy;

rs = integrate.solve_ivp(f, (0, 10), y0=fy ,t_eval=np.linspace(0, 10, 100))
y = rs.y
#x=np.linspace(2,10,100)
plt.plot(y)
plt.show()