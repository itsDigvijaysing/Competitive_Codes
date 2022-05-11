# from Crypto.Cipher import AES

# key = b'Sixteen byte key'
# cipher = AES.new(key, AES.MODE_EAX)

# data=b'Hello World'
# nonce = cipher.nonce

# ciphertext, tag = cipher.encrypt_and_digest(data)

# print(ciphertext)


from Crypto.Cipher import AES
 
key = b'abcdefghijklmnop'
data = '123345'

cipher = AES.new(key, AES.MODE_ECB)
msg =cipher.encrypt(data)
print (type(msg))
 
print(msg.encode("hex"))
 
decipher = AES.new(key, AES.MODE_ECB)
print(decipher.decrypt(msg))

