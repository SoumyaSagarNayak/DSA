class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) { 
        vector<int> ans;

        if (nums.empty())return ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int small = nums[0];
        int large = nums[n - 1];

     
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] > 1) {
                for (int j = nums[i] + 1; j < nums[i + 1]; j++)
                    ans.push_back(j);
            }
        }
        return ans;
    }
};