
import numpy as np 

q = 2
r = 3
s = 4

A = np.matrix([1, 2, 3, 4, 5, 6]).reshape((q,r))
print("\nA = \n", A)

B = np.matrix([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]).reshape((r,s))
print("\nB = \n", B)

C = A*B
print("\nC = \n", C)
