#If split input needed
# numbers = input_from_user.split()
# numbers=map(int, numbers)


n=int(input())
lst = []

for i in map(int,input().split()):
    lst.append(i)

A=max(lst)
B=min(lst)


print(A+B)