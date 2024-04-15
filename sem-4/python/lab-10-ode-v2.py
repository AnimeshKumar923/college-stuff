import numpy as np
from scipy.integrate import solve_ivp
import matplotlib.pyplot as plt

# Define the ODE function
def ode(t, y):
    return t * y

# Define the time span
t_span = (0, 10)

# Define the initial condition
y0 = [1]

# Solve the IVP
sol = solve_ivp(ode, t_span, y0, t_eval=np.linspace(0, 10, 100))

# Plot the solution
plt.plot(sol.t, sol.y[0], label='y(t)')
plt.xlabel('t')
plt.ylabel('y')
plt.title('Solution of the IVP')
plt.legend()
plt.show()