import functools
import operator

class Solution:
    # def countMaxOrSubsets(self, nums: list[int]) -> int:
    #     # Wrong code is not working
    #     max_or = 0
    #     for num in nums:
    #         max_or |= num

    #     # Step 2: Initialize a set to track the OR results of different subsets
    #     current_ors = {0}
    #     count = 0

    #     # Step 3: For each number, update the set of OR results
    #     for num in nums:
    #         new_ors = {val | num for val in current_ors}  # OR current num with all existing OR values
    #         current_ors.update(new_ors)  # Add the new OR results to the set

    #         # Step 4: Count how many ORs in this step equal max_or
    #         count += sum(1 for val in new_ors if val == max_or)

    #     return count


    
    def countMaxOrSubsets2(self, nums: list[int]) -> int:
        # It finds the max_or by merging or of all elements
        max_or = functools.reduce(operator.or_, nums)
        count = 0

        def explore_subsets(index: int, current_or: int) -> None:
            nonlocal count  # This allows the function to modify the 'count' variable defined in an enclosing scope.
            
            if index == len(nums):  # Base case: if the index is equal to the length of the list 'nums'
                if current_or == max_or:  # Check if the current OR value is equal to the maximum OR value found
                    count += 1  # If so, increment the count
                return  # Exit the function
            
            # Here you would typically have recursive calls to explore further subsets
            explore_subsets(index + 1, current_or) # Exclude the current element from the OR operation
            explore_subsets(index + 1, current_or | nums[index])  # Include the current element in the OR operation

        explore_subsets(0, 0)
        
        return count
        
t = input()
t = list(map(int, t.split()))
solution = Solution()
print(solution.countMaxOrSubsets2(t))