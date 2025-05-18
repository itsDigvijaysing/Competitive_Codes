class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        SA=[]
        Rw=[]
        Cl=[]
        SA.extend(A)
        SA.sort(reverse=True)
        count=0
        while(A!=SA):
            for i in range(len(A)):
                # print(i,A[i])
                # print(A)
                # print(SA)
                if A[i] not in Cl:
                    Cl.append(A[i])
                    print(Cl)
                elif A[i] in Cl:
                    Rw.append(Cl)
                    del Cl[:]
                    # print(C)
                    # print(R)
            
            count=len(Rw) + count        
            for j in range(len(Rw)):
                Rw[j].sort()
                A.extend(Rw[j])
            
            print(Rw)
            # print(A)
            del Rw[:]
            del Cl[:]
            
            
        return count

A=[]
B=3
for i in range(B):
    # print(i)
    A[i]=int(input())

obj=Solution()
ans=obj.solve(A)
print(ans)