class Solution:
    def countCommas(self, n: int) -> int:
        digits=len(str(n))
        if digits<4 :
            return 0
        else:
            return (n-1000)+1
        