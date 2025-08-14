class Solution {
public:
    string largestGoodInteger(string num) {
        char best = 0; 
        
        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                best = max(best, num[i]);
            }
        }
        
        return best ? string(3, best) : "";
    }
};