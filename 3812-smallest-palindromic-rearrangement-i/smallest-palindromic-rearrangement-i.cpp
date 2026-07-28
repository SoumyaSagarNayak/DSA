class Solution {
public:
    string smallestPalindrome(string s) {
         vector<int> count(256, 0);

        for (char ch : s) {
            count[ch]++;
        }

        string left = "";
        string right = "";
        string mid = "";

        for (char ch = 'a'; ch <= 'z'; ch++) {

            for (int i = 0; i < count[ch] / 2; i++) {
                left += ch;
            }

            if (count[ch] % 2 == 1) {
                mid = ch;
            }
        }

        right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};