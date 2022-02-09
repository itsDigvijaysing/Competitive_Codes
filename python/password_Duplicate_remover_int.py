pwd1=input()
test_list = list(pwd1)
pwd2=""

res = []
rep= []
for i in test_list:
    if i not in res:
        res.append(i)
    else:
        rep.append(i)

for i in rep:
    res.remove(i)

for i in res:
    pwd2 += i

print(pwd2)
