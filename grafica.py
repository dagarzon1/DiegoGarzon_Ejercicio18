import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("datos.txt")
h=0.01
N=3/h
x=np.linspace(0,3,N)
y=np.exp(-x)
plt.scatter(data[:,0],data[:,1], label="numerical")
plt.plot(x,y, label="analitical", color='r')
plt.legend()
plt.savefig("grafica1.png")
