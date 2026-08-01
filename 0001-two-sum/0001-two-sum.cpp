class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(seen.find(rem)!=seen.end()) return {seen[rem],i};
            seen[nums[i]]=i;
        }
        return {};
    }
};