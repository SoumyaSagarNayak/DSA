class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        seqsum=nums[0]
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]+1:
                seqsum+=nums[i]
            else:
                break
        while seqsum in nums:
            seqsum+=1
        else:
            return seqsum

        