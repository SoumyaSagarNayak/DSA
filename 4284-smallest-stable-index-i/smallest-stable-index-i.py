class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:


        
        for i in range(len(nums)):
            minn=float('inf')
            maxx=float('-inf')
            for j in range(0,i+1):
                maxx=max(maxx,nums[j])
                
            for j in range(i,len(nums)):
                minn=min(minn,nums[j])

            diff=maxx-minn

            if diff<=k:
                return i
        return -1

        