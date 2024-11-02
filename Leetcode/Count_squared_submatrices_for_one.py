class Solution:
    def countSquares(self, matrix: list[list[int]]) -> int:
        row = len(matrix)
        col = len(matrix[0])
        dp=[]
        for i in range(row+1):
            dp.append([0]*(col+1))
        # dp = [[0]*(col+1) for _ in range(row+1)]

        output=0
        for i in range(row):
            for j in range(col):
                if matrix[i][j]==1:
                    dp[i+1][j+1] = (min(dp[i][j+1],dp[i+1][j], dp[i][j])+1)
                    output += dp[i+1][j+1]
        return output