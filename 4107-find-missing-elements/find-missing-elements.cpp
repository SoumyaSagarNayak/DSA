class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       
        
        int n=nums.size();
        int small=INT_MAX;
        int large=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>large)large=nums[i];
            if(nums[i]<small)small=nums[i];
        }
        unordered_set<int>st;
        for(int num:nums)st.insert(num);

        vector<int>ans;
        for(int i=small;i<=large;i++){
            if (st.find(i) == st.end()) {
                ans.push_back(i);
        } 
    }
    return ans;
    }
};