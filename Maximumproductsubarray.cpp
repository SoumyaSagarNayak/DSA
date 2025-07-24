Leetcode 152: https://leetcode.com/problems/maximum-product-subarray/description/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxx = INT_MIN;

        for (int i = 0; i < n; ++i) {
            int currProd = 1;
            for (int j = i; j < n; ++j) {
                currProd *= nums[j];        
                maxx = max(maxx, currProd);
            }
        }

        return maxx;
    }
};
