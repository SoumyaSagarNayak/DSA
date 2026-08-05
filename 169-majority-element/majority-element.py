class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count={}
        for num in nums:
            if num in count:
                count[num]+=1
            else:
                count[num]=1
        
        for key,value in count.items():
            if value>len(nums)//2:
                return key

        

        