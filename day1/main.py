from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            j = i + 1
            while j < len(nums):
                if nums[i] != nums[j]:
                    break
                if nums[i] == nums[j]:
                    nums.pop(j)
                    j = j - 1
                j = j + 1
        print(len(nums), ',nums =', nums)


test = Solution()
test.removeDuplicates([1,1,1,2,5,8,8])
