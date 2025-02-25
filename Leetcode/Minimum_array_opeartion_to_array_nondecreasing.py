from typing import List

class Solution:
    def find_greatest_proper_divisor(self, number: int) -> int:
        if number <= 1:
            return 0
        for divisor in range(int(number**0.5), 0, -1):
            if number % divisor == 0:
                return number // divisor if divisor != number else number // (number // divisor)
        return 1

    def minOperations(self, nums: List[int]) -> int:
        length_of_nums = len(nums)
        total_operations = 0
        
        max_value_in_nums = max(nums)
        greatest_proper_divisors = [0] * (max_value_in_nums + 1)
        for value in range(2, max_value_in_nums + 1):
            greatest_proper_divisors[value] = self.find_greatest_proper_divisor(value)

        for index in range(length_of_nums - 2, -1, -1):
            while nums[index] > nums[index + 1]:
                gpd_value = greatest_proper_divisors[nums[index]]
                if gpd_value == 0:
                    return -1
                nums[index] //= gpd_value
                total_operations += 1
                
                if nums[index] == 1:
                    break

        return total_operations

# Example usage:
sol = Solution()
print(sol.minOperations([25, 7]))  # Output: 1
print(sol.minOperations([7, 7, 6]))  # Output: 2
print(sol.minOperations([1, 1, 1, 1]))  # Output: 0