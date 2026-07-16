class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0];
        int maxx=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            maxx=max(maxx,curr);
        }
        return maxx;
    }
};