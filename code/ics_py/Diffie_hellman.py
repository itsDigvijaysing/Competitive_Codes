#Diffie Hellman Key Exchange Alogorithm
sharedPrime = int(input("Enter shared Prime(n):"))
sharedBase = int(input("Enter shared Base(g):"))
aliceSecret = int(input("Enter Alice Secret Key(x):"))
bobSecret = int(input("Enter Bob Secret Key(y):"))
 
# Alice Sends Bob A = g^x mod n
A = (sharedBase**aliceSecret) % sharedPrime
print( "\nAlice Publicly shared key: " , A )

# Bob Sends Alice B = g^y mod n
B = (sharedBase ** bobSecret) % sharedPrime
print("Bob Publicly shared key: ", B )

aliceSharedSecret = (B ** aliceSecret) % sharedPrime 
bobSharedSecret = (A**bobSecret) % sharedPrime
if aliceSharedSecret==bobSharedSecret:
    print("\nSecured Connection (Shared Key): ",aliceSharedSecret,"\n")
else:
    print("\nSecured Connection failed to establish\n")