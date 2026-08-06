class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        count={}
        for n in nums:
            if n in count:
                count[n]+=1
            else:
                count[n]=1
        for value in count.values():
            if value>1:
                return True
        return False
        