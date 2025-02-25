class Solution:
    def invert(self, s: str) -> str:
        s = list(s)
        for i in range(len(s)):
            if s[i]=='0':
                s[i]='1'
            else:
                s[i]='0'
        
        return ''.join(s)


    def findKthBit(self, n: int, k: int) -> str:
        print(n,k)
        output = 0
        s="0"
        for i in range(1,n):
            s=s+"1"+''.join(reversed(self.invert(s)))
        return s[k-1]
    
    def findKthBit2(self, n: int, k: int) -> str:
        if n == 1:
            return "0"
        length = (1 << n) - 1
        mid = length // 2 + 1
        if k == mid:
            return "1"
        if k < mid:
            return self.findKthBit(n - 1, k)
        opposite_k = mid - (k - mid)
        return "0" if self.findKthBit(n - 1, opposite_k) == "1" else "1"
        
n = int(input())
k = int(input())
solution = Solution()
print(solution.findKthBit(n,k))