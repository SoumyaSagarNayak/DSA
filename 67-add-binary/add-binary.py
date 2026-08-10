class Solution:
    def addBinary(self, a: str, b: str) -> str:
        s=int(a,2)
        p=int(b,2)
        x=s+p
        z=bin(x)
        return z[2:]