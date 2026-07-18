class Solution {
public:
    int findGCD(vector<int>& nums) {

        int minn= *min_element(nums.begin(),nums.end());
        int maxx= *max_element(nums.begin(),nums.end());

       return gcd(minn,maxx); 
    }
};