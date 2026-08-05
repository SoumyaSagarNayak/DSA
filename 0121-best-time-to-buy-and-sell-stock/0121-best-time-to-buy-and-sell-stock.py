class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        if not prices:
            return 0

        minn=prices[0]
        maxx=0
        curr=0
        for price in prices:
            minn=min(minn,price)
            curr=price-minn
            maxx=max(curr,maxx)
        return maxx

        