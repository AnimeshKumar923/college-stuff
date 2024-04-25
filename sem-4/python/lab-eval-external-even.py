import numpy as np
import numpy as np
from scipy.optimize import minimize
import matplotlib.pyplot as plt

# Objective function
def objective(x):
    return x**2 + 10*np.sin(x)


p1 = {'product_id': 1, 'current_stock': 20, 'demand_forecast': [2,4,5,7,8] , 'restock_cost': 20}
p2 = {'product_id': 2, 'current_stock': 15, 'demand_forecast': [1,1,5,3,4], 'restock_cost': 30}
p3 = {'product_id': 3, 'current_stock': 25, 'demand_forecast': [2,2,2,4,1], 'restock_cost': 25}
p4 = {'product_id': 4, 'current_stock': 30, 'demand_forecast': [3,7,5,4,0], 'restock_cost': 40}
p5 = {'product_id': 5, 'current_stock': 18, 'demand_forecast': [1.2,3,4,5], 'restock_cost': 50}

listOfProduct = [p1, p2, p3, p4, p5]
# Initial guess
x0 = 0
# Define the constraint function
def constraint(x):
    total_cost = 0
    for product in listOfProduct:
        demand = product['demand_forecast']
        current_stock = product['current_stock']
        restock_cost = product['restock_cost']
        stock_after_restock = current_stock + x
        shortage = max(0, sum(demand) - stock_after_restock)
        total_cost += shortage * restock_cost
    return total_cost

constraint_eq = {'type': 'eq', 'fun': constraint}

# calling minimization functionn
result = minimize(objective, x0, constraints=constraint_eq)
print("Minimum value:", result.fun)
print("Optimal solution:", result.x)

x = np.linspace(-10, 10, 100)
y = objective(x)
plt.plot(x, y)
plt.xlabel('x')
plt.ylabel('f(x)')