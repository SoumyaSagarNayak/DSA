class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        maxx=float('-inf')
        maxx=float('-inf')
        
       
        for i in range(len(nums)):
            minn=float('inf')
            nminn=float('inf')

            
            
            maxx=max(maxx,nums[i])

            for j in range(i,len(nums)):
                minn=min(minn,nums[j])
                
                

            diff=maxx-minn
            


            if diff<=k:
                return i
        return -1

        