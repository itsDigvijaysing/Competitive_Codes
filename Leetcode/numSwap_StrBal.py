class Solution:
    def minSwaps(self, s: str) -> int:
        # print(s)
        s = list(s)
        n = len(s)
        # left = 0
        checker = 0
        swap = 0
        for i in range(len(s)):
            if i>0 and s[i] == ']' and s[i-1] == '[':
                continue
            elif s[i] == ']' and i<n/2:
                checker += 1
                if s[n-1-i] == '[':
                    checker -= 1
                    swap += 1
                    temp = s[i]
                    s[i] = s[n-1-i]
                    s[n-1-i] = temp
            elif i>0 and s[i] == '[' and checker > 0:
                checker -= 1
                swap += 1
                temp = s[i]
                s[i] = s[i-1]
                s[i-1] = temp
        print(s)
        return swap

    def minSwaps2(self, s: str) -> int:
        s = list(s)
        n = len(s)
        new_s = []
        checker = 0
        swap = 0
        for i in range(len(s)):
            if len(new_s) > 0 and s[i] == ']' and new_s[-1] == '[':
                new_s.pop()
            else:
                new_s.append(s[i])
        # print(new_s)
        n = len(new_s)
        for i in range(len(new_s)):
            if i>0 and new_s[i] == ']' and new_s[i-1] == '[':
                continue
            elif new_s[i] == ']' and i<n/2:
                checker += 1
                if new_s[n-1-i] == '[':
                    checker -= 1
                    swap += 1
                    temp = new_s[i]
                    new_s[i] = new_s[n-1-i]
                    new_s[n-1-i] = temp
            elif i>0 and new_s[i] == '[' and checker > 0:
                checker -= 1
                swap += 1
                temp = new_s[i]
                new_s[i] = new_s[i-1]
                new_s[i-1] = temp
        # print(swap)
        return swap
            

brackets = input()
solution = Solution()
print(solution.minSwaps2(brackets))