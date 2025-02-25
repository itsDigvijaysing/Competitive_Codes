from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i, num in enumerate(nums):
            if num >= target:
                return i
        return len(nums)
        
nums = [1,3,5,6]
target = 5
print(Solution().searchInsert(nums, target))