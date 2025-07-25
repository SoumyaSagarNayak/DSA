Leetcode 3487: https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/description/
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = 0 ;
        int  N = nums.size() ;
        int mx = -100 ;

        // skip -ves

        vector<bool> seen(101 , false) ;

        for(int i = 0 ; i < N ; i++) {
            // find max
            mx = max(mx , nums[i]) ;
            // if -ve then skip
            if(nums[i] < 0) continue ;
            // if it's duplicate then skip
            if(seen[nums[i]] == true) continue ;
            // update ans
            ans = ans + nums[i] ;
            seen[nums[i]] = true ;
        }

        // if the array is full of -ve ints 
        if(ans == 0) ans = mx ;

        return ans ;
    }
};
