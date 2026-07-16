class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = 0;

        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            nums[i] = gcd(nums[i], mx);
        }

        sort(nums.begin(), nums.end());

        long long ans = 0;
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            ans += gcd(nums[i], nums[j]);
            i++;
            j--;
        }

        return ans;
    }
};