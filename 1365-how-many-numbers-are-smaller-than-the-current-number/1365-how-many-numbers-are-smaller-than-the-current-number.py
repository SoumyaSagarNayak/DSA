class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        temp=sorted((nums))
        position={}

        for i,num in enumerate(temp):
            if num not in position:
                position[num]=i

        count=[]
        for i in nums:
            count.append(position[i])
        return count        