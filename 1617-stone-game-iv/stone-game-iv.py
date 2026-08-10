# class Solution:
#     def winnerSquareGame(self, n: int) -> bool:
#         p=int(n**0.5)
#         if p*p==n :
#             return True
#         i=0
#         while n>0:
#             i+=1
#             p=int(n**0.5)
#             if p*p==n and i%2!=0:
#                 return True
#             elif p*p==n and i%2==0:
#                 n=n-(p*p)
#                 if n==0:
#                     return False
#             else:
#                 n=n-(p*p)
#         if i%2==0:
#             return False
        
        


class Solution:
    def winnerSquareGame(self, n: int) -> bool:
        dp = [False] * (n + 1)

        for i in range(1, n + 1):

            p = 1
            while p * p <= i:

                if dp[i - p * p] == False:
                    dp[i] = True
                    break

                p += 1

        return dp[n]