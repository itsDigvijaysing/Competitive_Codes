class Solution:
    def maximumSwap(self, num: int) -> int:
        l_num=list(str(num))
        checker=sorted(l_num,reverse=True)
        # print('l_num',l_num,'\n checker',checker)
        max,m_index=0,0
        for i in range(len(l_num)):
            if l_num[i]!=checker[i]:
                for j in range(i,len(l_num)):
                    if int(l_num[j])>=int(max) and m_index<j:
                        max=l_num[j]
                        m_index=j
                # print('i',i,'j',m_index)
                temp=l_num[i]
                l_num[i]=max
                l_num[m_index]=temp
                break
        return int(''.join(l_num))
        
t = input()
solution = Solution()
print(solution.maximumSwap(t))