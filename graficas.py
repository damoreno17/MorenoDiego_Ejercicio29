import numpy as np
from matplotlib import pyplot as plt

datos = np.genfromtxt('datos.dat')


plt.figure()
plt.plot(datos[0], datos[1])
plt.savefig('graficos.png')