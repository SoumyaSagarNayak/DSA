class Solution(object):
    def flowerGame(self, n, m):
        """
        :type n: int
        :type m: int
        :rtype: int
        """
        # Count how many odds and evens exist up to n
        odd_x = (n + 1) // 2   # odds from 1..n
        even_x = n // 2        # evens from 1..n

        # Count how many odds and evens exist up to m
        odd_y = (m + 1) // 2   # odds from 1..m
        even_y = m // 2        # evens from 1..m

        # Alice wins if x+y is odd
        return odd_x * even_y + even_x * odd_y
