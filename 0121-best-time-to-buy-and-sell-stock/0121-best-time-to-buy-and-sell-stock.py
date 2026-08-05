class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minn=prices[0]
        maxx=0
        curr=0
        for i in range(len(prices)):
            minn=min(minn,prices[i])
            curr=prices[i]-minn
            maxx=max(curr,maxx)
        return maxx

        