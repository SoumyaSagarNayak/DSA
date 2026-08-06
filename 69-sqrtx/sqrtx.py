class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0 or x==1:
            return x
        low=0
        high=x
        ans=0
        while low<=high:
            mid=(low+high)//2
            if mid*mid==x:
                return mid
            elif mid*mid<x:
                ans=mid
                low=mid+1
            elif mid*mid>x:
                high=mid-1

        return ans


        