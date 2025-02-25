from collections import defaultdict

import heapq

class Solution:
    def smallestRange(self, nums: list[list[int]]) -> list[int]:
        heap, max_val = [], float('-inf')
        for i, lst in enumerate(nums):
            heapq.heappush(heap, (lst[0], i, 0))
            max_val = max(max_val, lst[0])
        
        best_range = [-float('inf'), float('inf')]
        
        while heap:
            min_val, row, idx = heapq.heappop(heap)
            if max_val - min_val < best_range[1] - best_range[0]:
                best_range = [min_val, max_val]
            if idx + 1 == len(nums[row]):
                break
            next_val = nums[row][idx + 1]
            heapq.heappush(heap, (next_val, row, idx + 1))
            max_val = max(max_val, next_val)
        
        return best_range

    def smallestRange2(self, nums: list[list[int]]) -> list[int]:
        k = len(nums)
        pos = defaultdict(list)
        for i in range(k):
            for num in nums[i]:
                pos[num].append(i)

        xs = sorted(pos)
        n = len(xs)

        count = [0] * k
        distinct = 0
        ans = [min(pos), max(pos)]
        right = -1
        for left in range(n):
            right = max(right, left-1)
        while right + 1 < n and distinct < k:
            right += 1
            for i in pos[xs[right]]:
                if count[i] == 0:
                    distinct += 1
            count[i] += 1
        if distinct == k and ans[1] - ans[0] > xs[right] - xs[left]:
            ans = [xs[left], xs[right]]
        for i in pos[xs[left]]:
            count[i] -= 1
            if count[i] == 0:
                distinct -= 1
        return ans