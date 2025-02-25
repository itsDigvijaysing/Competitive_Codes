class Solution:
    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        output =""
        values=[[a,'a'],[b,'b'],[c,'c']]
        print(values)
        values.sort(reverse=True)
        count_max, count_mid, count_min = 0, 0, 0
        while True:
            if output == "" or (count_max < 2 and values[0][0]>0):
                output += values[0][1]
                values[0][0] -= 1
                count_max += 1
                if count_max>1 or values[0][0]<1: count_mid, count_min = 0,0
            elif (count_mid < 2 and values[1][0]>0):
                output += values[1][1]
                values[1][0] -= 1
                count_mid += 1
                if count_mid>1 or values[1][0]<1: count_max, count_min = 0,0
            elif (count_min < 2 and values[2][0]>0):
                output += values[2][1]
                values[2][0] -= 1
                count_min += 1
                if count_min>1 or values[2][0]<1: count_max, count_min = 0,0
            else:
                break
        print(values)
        print(output)
        return output
    
    def longestDiverseString2(self, a: int, b: int, c: int) -> str:
        output=""
        values=[[a,'a'],[b,'b'],[c,'c']]
        # print(values)
        while True:
            values.sort(reverse=True)
            if values[0][0] == 0:
                break
            if len(output) < 2 or not (output[-1] == output[-2] == values[0][1]):
                output += values[0][1]
                values[0][0] -= 1
            else:
                if values[1][0] > 0:
                    output += values[1][1]
                    values[1][0] -= 1
                else:
                    break
        return output

inp = input()
inp = inp.split()
solution = Solution()
print(solution.longestDiverseString2(int(inp[0]),int(inp[1]),int(inp[2])))