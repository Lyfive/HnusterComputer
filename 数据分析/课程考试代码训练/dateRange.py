import matplotlib
matplotlib.use('TkAgg')  # 使用Tkinter作为后端
import matplotlib.pyplot as plt
import numpy as np

# Create a figure
fig = plt.figure()

# Create subplots
t1 = fig.add_subplot(2, 2, 1)
t2 = fig.add_subplot(2, 2, 2)

# Create x values with more points (using linspace for better control)
x = np.linspace(0,np.pi*2,100)

# Calculate y values
y1 = np.sin(x)
y2 = np.cos(x)

# Plot the data
t1.plot(x, y1)
t1.set_title("Sine Wave")
t2.plot(x, y2)
t2.set_title('Cosine Wave')




# Show the plot
plt.show()