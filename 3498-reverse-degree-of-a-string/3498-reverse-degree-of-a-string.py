class Solution:
    def reverseDegree(self, s: str) -> int:
        hashh={}
        for i in range(26):
            indx=chr(ord('a')+i)
            hashh[indx]=26-i

        ans=0
        
        for i in range(len(s)):
            ans+=hashh[s[i]]*(i+1)

        return ans
        