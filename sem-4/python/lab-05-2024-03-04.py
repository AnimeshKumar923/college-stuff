from scipy import interpolate
import matplotlib.pyplot as plt

x=(1,2,3,5)
y=(3,4.5,5,6)

plt.plot(x,y)
plt.scatter(x,y)
plt.show()


f=interpolate.interp1d(x,y)
xNew=4
yNew=f(xNew)

plt.plot(x,y,'*', xNew, yNew, '_', 'green')