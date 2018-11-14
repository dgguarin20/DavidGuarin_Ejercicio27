import numpy as np
import matplotlib.pyplot as plt

list = []
n =5
for i in range(0,n):
    mensaje = "sample_"+str(i)
    mensaje += ".dat"
    myarray = np.fromfile(mensaje, dtype=float)
    lista.append(myarray)

lista = np.asarray(lista)
l = []
miu = myarray[0]
std = myarray[1]

for j in range(0,len(lista)):
    myarray2 = lista[j]
    for i in range(0,len(myarray2)-2):
        l.append(myarray2[i+2])

l = np.asarray(l)
fig=plt.figure()
a,b,c =plt.hist(l, normed=1)
plt.show()
fig.savefig('grafica.pdf')
