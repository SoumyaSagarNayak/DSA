class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0); // (A)
    }

    int solve(vector<int>& nums, int i, int currXor) {
        if (i == nums.size())            // (B)
            return currXor;             // (C)

        int include = solve(nums, i + 1, currXor ^ nums[i]); // (D)
        int exclude = solve(nums, i + 1, currXor);          // (E)

        return include + exclude;       // (F)
    }
};
