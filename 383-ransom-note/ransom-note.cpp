class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> count(256, 0);

        for (char ch : magazine) {
            count[ch]++;
        }

        for (char ch : ransomNote) {

            if (count[ch] == 0) {
                return false;
            }

            count[ch]--;
        }

        return true;
    }
};