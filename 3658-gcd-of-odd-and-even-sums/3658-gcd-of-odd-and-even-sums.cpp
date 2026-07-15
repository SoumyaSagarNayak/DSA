
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum = n * n;
        int evensum = n * (n + 1);
        int gcd = 1;
        for (int i = 1; i <= min(oddsum, evensum); i++) {
            if (oddsum % i == 0 && evensum % i == 0) gcd = i;
        }
        return gcd;
    }
};