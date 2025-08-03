class Solution {
public:
  int characterReplacement(string s, int k) {
    int left = 0;
    int maxFreq = 0;
    int result = 0;
    vector<int> count(26, 0); // For 'A' to 'Z'

    for (int right = 0; right < s.length(); ++right) {
        count[s[right] - 'A']++; 
        maxFreq = max(maxFreq, count[s[right] - 'A']); 

        int windowSize = right - left + 1;

        if (windowSize - maxFreq > k) {
            count[s[left] - 'A']--; 
            left++; 
        }

        result = max(result, right - left + 1);
    }

    return result;
}

};