class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int cmaxx=nums[0];
       int cminn=nums[0];

       int maxx=nums[0];
       int minn=nums[0];

       for(int i=1;i<nums.size();i++){

        cmaxx=max(nums[i],nums[i]+cmaxx);
        maxx=max(maxx,cmaxx);

        cminn=min(nums[i],nums[i]+cminn);
        minn=min(minn,cminn);
       } 
       return max(abs(maxx),abs(minn));
    }
};