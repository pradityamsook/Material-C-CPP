import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 1000) ** 3
x1 = np.linspace(-10, 10, 2000) ** 3 + 500
x2 = np.linspace(-10, 10 ,1000) ** 3 + 1000
plt.hist([x, x1, x2], bins = 100, stacked = 1)
plt.show()
