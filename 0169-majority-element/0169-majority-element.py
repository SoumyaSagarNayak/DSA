class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        sett={}
        count=0
        for i in nums:
            if i in sett:
                sett[i]+=1
            else:
                sett[i]=1
            if sett[i] > len(nums) // 2:
                return i

         



        