class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res;
        unordered_set<int> prev;
        for (int num : arr) {
            unordered_set<int> cur;
            cur.insert(num);
            for (int val : prev) {
                cur.insert(val | num);
            }
            for (int val : cur) {
                res.insert(val);  
            }
            prev = cur;  
        }
        return res.size();  
    }
};