class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        maxx=nums[0]
        for i in nums:
            maxx=max(maxx,i)
        mull=maxx%k
        return k*(mull+1)
        