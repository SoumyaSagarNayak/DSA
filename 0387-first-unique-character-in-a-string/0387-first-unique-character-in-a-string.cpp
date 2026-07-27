class Solution {
public:
    int firstUniqChar(string s) {
        int freq[256] = {0};
        int n = s.size();

        for(int i=0;i<n;i++){
          
            freq[s[i]]++;
        }

        for(int i=0;i<n;i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};