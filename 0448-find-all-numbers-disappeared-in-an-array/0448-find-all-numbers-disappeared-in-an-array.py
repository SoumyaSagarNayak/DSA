class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        setofnums=set(nums)
        notinnums=[]
        for i in range(1,len(nums)+1):
            if i not in setofnums:
                notinnums.append(i)
        return notinnums
        