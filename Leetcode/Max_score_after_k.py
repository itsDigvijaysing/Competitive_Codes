import math
import heapq

class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        output=0
        nums = [-num for num in nums]
        heapq.heapify(nums)
        for i in range(k):
            max_value = -heapq.heappop(nums)
            output += max_value
            heapq.heappush(nums, -math.ceil(max_value / 3))
        return output