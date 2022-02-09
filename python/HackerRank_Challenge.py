# Code for IBM Challeng (Submitted code with error)

words=input()
Block=input()
findword=input()

wordsplit=words.split()
Blocksplit=list(Block)
findword=str(findword)
A=str(Blocksplit[0])
B=int(Blocksplit[1])
C=0

for i in range (len(wordsplit)):
    if(wordsplit[i]==findword):
        C=1
        A=chr(ord(A)+i)
        print(A+str(B))

if C==0:
    print('Invalid Value')