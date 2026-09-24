class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            sum=0
            num = nums[i]
            while num>0:
                digit = num % 10
                sum=sum+digit
                num = num // 10  
            if sum == i:
                return i
        return -1