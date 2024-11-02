# The first element ( c_1 - b_1 ) is always ( 0 ) because ( b_1 ) and ( c_1 ) are both the first element of the sorted array.
# For the remaining elements, the difference ( c_i - b_i ) is always ( c - b ) (where ( c ) is the largest element and ( b ) is the smallest element).

def gift_from_orangutan(t : int) -> int:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    b = a[0]
    c = a[-1]
    return ((c-b)*(n-1))


t = int(input())
for i in range(t):
    print(gift_from_orangutan(t))