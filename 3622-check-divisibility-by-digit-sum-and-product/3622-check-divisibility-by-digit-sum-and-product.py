class Solution:
    def checkDivisibility(self, n: int) -> bool:
        num = n
        summ = 0
        prod = 1
        while num > 0:
            digit = num % 10
            summ += digit
            prod *= digit
            num = num // 10
            finsum=summ+prod
        return n % finsum == 0
