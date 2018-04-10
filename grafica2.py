import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("datos2.txt")
h=0.001
N=10/h
x=np.linspace(0,10,N)
y=np.cos(x)
plt.scatter(data[:,0],data[:,1], label="numerical")
plt.plot(x,y, label="analitical", color='r')
plt.legend()
plt.savefig("grafica2.png")
plt.clf()
plt.scatter(data[:,1],data[:,2], label="z vs y")
plt.xlabel("y")
plt.ylabel("z")
plt.legend()
plt.savefig("z_vs_y.png")


