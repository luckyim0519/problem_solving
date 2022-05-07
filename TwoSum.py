#leetcode 'TwoSum' problem

class Solution:
     def twoSum(self, nums: List[int], target: int) -> List[int]:
         stored = dict()

         for i, numValue in enumerate(nums):
             remaining = target - nums[i]

             if remaining in stored:
                 return [i, stored[remaining]]
             else:
                 stored[numValue] = i