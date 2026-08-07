class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map={}
        for i in range(len(nums)):
            req=target-nums[i]

            if req in map:
                return [map[req],i]
            map[nums[i]]=i
        