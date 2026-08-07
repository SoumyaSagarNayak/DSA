class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        for index,value in enumerate(nums):
            if(index!=value):
                return value-1
            if value==len(nums)-1:
                return value+1
        