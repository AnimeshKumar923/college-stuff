import matplotlib.pyplot as plt;

# intializing the data
x = [10, 20, 30, 40];
y = [20, 30, 40, 50];

#plotting the data
plt.plot(x,y);

# adding the title
plt.title('Simple Plot')

# adding the labels
plt.ylabel('y-axis');
plt.xlabel('x-axis');
plt.show();