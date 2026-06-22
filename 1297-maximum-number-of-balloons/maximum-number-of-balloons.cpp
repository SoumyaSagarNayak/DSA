class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnt[26];
        for(auto c:text){
            cnt[c-'a']++;
        }
        int ans = cnt[1];
        
        string s = "balloon";
        for(auto c:s){
            if(c=='l'||c=='o')ans = min(ans , cnt[c-'a']/2);
            else ans = min(ans , cnt[c-'a']);
        }
        return ans;
    }
};