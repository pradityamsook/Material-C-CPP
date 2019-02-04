import numpy as np

def fractal(n):
    if(n>0):
        x,y = fractal(n-1)
        for i in range(len(x)):
            for j in range(5):
                theta = (x[i]+j*2)/5*np.pi
                r = (y[i]+1)/2
                x += [r*np.cos(theta)]
                y += [r*np.sin(theta)]
        return x,y
    else:
        theta = np.radians(np.arange(361))
        x = [np.cos(theta)]
        y = [np.sin(theta)]
        return x,y

import matplotlib.pyplot as plt

def plot_fractal(n):
    x,y = fractal(n)
    plt.figure(figsize=[10,10])
    plt.axes([0,0,1,1],xlim=[-1,1],ylim=[-1,1],aspect=1,axis_bgcolor=[0,0,0])
    si = plt.get_cmap('rainbow')(np.random.rand(len(x)))
    for i in range(len(x)):
        plt.plot(x[i],y[i],color=si[i])
    plt.show()
    
plot_fractal(0)
