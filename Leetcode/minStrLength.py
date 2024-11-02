class Solution:
    def minLength(self, s: str) -> int:
        s = list(s)  
        n = len(s)
        looper = True
        counter = 0
        
        while looper:
            o_counter = counter
            i = 0
            while i < n:
                if s[i] == 'A':
                    if i + 1 < n and s[i + 1] == 'B':
                        counter += 1
                        s[i] = '0'
                        s[i + 1] = '0'
                        i += 2
                    else:
                        i += 1
                elif s[i] == 'C':
                    if i + 1 < n and s[i + 1] == 'D':
                        counter += 1
                        s[i] = '0'
                        s[i + 1] = '0'
                        i += 2
                    else:
                        i += 1
                else:
                    i += 1
            
            s = [char for char in s if char != '0']
            n = len(s)

            if o_counter == counter:
                looper = False
        
        return n

input_str = input()
solution = Solution()
result = solution.minLength(input_str)
print(result)
