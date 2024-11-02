# import sys
# input = sys.stdin.read

# def solve():
#     data = input().split()
#     index = 0
#     t = int(data[index])
#     index += 1
#     results = []
    
#     for _ in range(t):
#         n = int(data[index])
#         index += 1
        
#         a = list(map(int, data[index:index + n]))
#         index += n
        
#         b = list(map(int, data[index:index + n]))
#         index += n
        
#         dp = [0] * (n + 1)
#         max_score = 0
        
#         for i in range(n - 1, -1, -1):
#             if i + 1 == b[i]:
#                 dp[i] = a[i]
#             else:
#                 dp[i] = a[i] + dp[b[i] - 1]
#             max_score = max(max_score, dp[i])
        
#         results.append(max_score)
#     print('\n'.join(map(str, results)))

# if __name__ == "__main__":
#     solve()
