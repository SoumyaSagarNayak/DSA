class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        collection={}
        for i in range(len(nums)):
            req=target-nums[i]
            if req in collection:
                return [collection[req],i]
            collection[nums[i]]=i

        