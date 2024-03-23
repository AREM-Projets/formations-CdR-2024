import matplotlib.pyplot as plt
import numpy as np

# Create an array of x values from 0 to 20
x_values = np.linspace(0, 20, 1000)

# Calculate the corresponding y values using the floor function
y_values = np.floor(x_values % 4)

# Create the plot
plt.figure(figsize=(10, 5))
plt.plot(x_values, y_values, label='floor(x % 4)')
plt.xlabel('x')
plt.ylabel('floor(x % 4)')
plt.title('Graph of floor(x % 4)')
plt.grid(True)
plt.legend()
plt.show()
