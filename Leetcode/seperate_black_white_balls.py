class Solution:
    def minimumSteps(self, s: str) -> int:
        list_s=list(s)
        output=0
        i=0
        len_s = len(list_s)
        sorted_s = sorted(list_s)
        while True:
            if list_s == sorted_s:
                break
            if list_s[i]=='1' and i+1<len_s:
                if list_s[i+1]=='0':
                    list_s[i+1]='1'
                    list_s[i]='0'
                    output+=1
            i=(i+1)%len_s
        return output
    
    def minimumSteps2(self, s: str) -> int:
        output=0
        swap=0
        len_s = len(s)
        j=len_s-1
        for i in reversed(range(len_s)):
            # print('I & J',i,j)
            if s[i]=='1':
                output+=(j-i)
                j=j-1
        return output
                    

value = input()
solution = Solution()
print(solution.minimumSteps(value))