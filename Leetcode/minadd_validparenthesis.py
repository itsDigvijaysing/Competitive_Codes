class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        new_s=[]
        s = list(s)
        # print(s)
        if len(s)==0:
            return 0
        for i in range(len(s)):
            if len(new_s)>0 and s[i]==')' and new_s[-1]=='(':
                new_s.pop()
            else:
                new_s.append(s[i])
        return len(new_s)
    
    # Extra Optimized solution
    def minAddToMakeValid2(self, s: str) -> int:
        opener = 0
        closer = 0
        for i in s:
            if i == '(':
                opener += 1
            elif i == ')':
                if(opener > 0):
                    opener -= 1
                else:
                    closer += 1
        return opener + closer

solution = Solution()
brackets = input()
print(solution.minAddToMakeValid2(brackets))