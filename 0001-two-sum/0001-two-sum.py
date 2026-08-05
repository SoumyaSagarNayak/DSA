class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictionary={}
        for i in range(len(nums)):
            req=target-nums[i]

            if req in dictionary:
                return[dictionary[req],i]

            dictionary[nums[i]]=i
        