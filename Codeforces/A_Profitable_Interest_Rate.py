def solution():
    a,b = map(int, input().split())
    if a>=b:
        print(a)
    elif a*2<b:
        print(0)
    else:
        print(a-(b-a))
t = int(input())
for i in range(t):
    solution()