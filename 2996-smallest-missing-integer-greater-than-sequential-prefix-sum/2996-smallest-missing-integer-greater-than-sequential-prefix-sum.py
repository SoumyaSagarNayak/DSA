class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        seqsum=nums[0]
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]+1:
                seqsum+=nums[i]
            else:
                break
        nums_set=set(nums)#done as normally its in list and list has o(n) lookup but set has o(1) lookup
        while seqsum in nums:
            seqsum+=1
        
        return seqsum

        