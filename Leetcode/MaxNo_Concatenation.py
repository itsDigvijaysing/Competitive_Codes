import itertools

class Solution:
    def maxGoodNumber(self, nums: list[int]) -> int:
        max_num = 0
        num0 =bin(int(nums[0]))
        num0 = int(str(num0)[2:])
        num1 =bin(int(nums[1]))
        num1 = int(str(num1)[2:])
        num2 =bin(int(nums[2]))
        num2 = int(str(num2)[2:])
        final_list=[num0,num1,num2]
        perms_nums = list(itertools.permutations(final_list))
        for i in perms_nums:
            total = str(i[0])+str(i[1])+str(i[2])
            total = int(total, 2)
            if total>max_num:
                max_num = total
        # print(max_num)
        return max_num

solution = Solution()
nums = input()
nums = nums.split()
print(solution.maxGoodNumber(nums))