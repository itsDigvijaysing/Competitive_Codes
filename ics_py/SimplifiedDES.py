import pyDes
from time import time

data = input("Please enter plain text for encryption:")
keystring=input("Enter 16 bit string for key generation:")
k = pyDes.triple_des(keystring, padmode=pyDes.PAD_PKCS5)
# print(k)
e = k.encrypt(data)
print ("cipher text: %r" % e)

#%r to be useful for printing a string of unknown encoding
print ("plain text: %r" % k.decrypt(e))
# t1 = time()
# for i in range(1000):
#      e = k.encrypt(data)
# t2 = time()

# print("Elapsed time for 1,000 encryptions: {:0.3f}s".format(t2 - t1))
