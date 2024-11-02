class Solution:
    def maxWidthRamp(self, nums: list[int]) -> int:
        output = 0
        size = len(nums)
        min_num = min(nums)
        current_min = nums[0]
        for i in range(size):
            if i > (size - output): 
                break
            if nums[i] > current_min:
                continue
            for j in range(size - 1, i, -1):
                if nums[i] <= nums[j]:
                    output = max(output, j - i)
                    break
            current_min = nums[i]
            if nums[i] == min_num:
                break
        return output
    
    def maxWidthRamp2(self, nums: list[int]) -> int:
        stack = []
        size = len(nums)
        output = 0
        for i in range(size):
            if not stack or nums[i] < nums[stack[-1]]:
                stack.append(i)
        for j in range(size - 1, -1, -1):
            while stack and nums[j] >= nums[stack[-1]]:
                output = max(output, j - stack.pop())
        return output
        
solution = Solution()
nums = input()
nums = list(nums.split(','))
print(solution.maxWidthRamp2(nums))