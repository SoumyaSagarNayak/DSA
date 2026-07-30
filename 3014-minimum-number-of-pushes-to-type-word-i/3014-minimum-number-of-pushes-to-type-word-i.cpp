class Solution {
public:
    int minimumPushes(string word) {

        vector<int> freq(256, 0);

        for (char c : word) {
            freq[c]++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;

        for (int i = 0; i < freq.size(); i++) {

            if (freq[i] == 0)
                break;

            int pushes = (i / 8) + 1;

            ans += freq[i] * pushes;
        }

        return ans;
    }
};