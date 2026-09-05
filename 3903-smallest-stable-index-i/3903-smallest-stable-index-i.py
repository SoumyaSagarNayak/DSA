class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        maxx=float('-inf')
        mapp={}
        minn=float('inf')

        for i in range(len(nums)-1,-1,-1):
            minn=min(minn,nums[i])
            mapp[i]=minn
            
            
        for i in range(len(nums)):
            
            maxx=max(maxx,nums[i])
            diff=maxx-mapp[i]
            
            if diff<=k:
                return i
        return -1

        