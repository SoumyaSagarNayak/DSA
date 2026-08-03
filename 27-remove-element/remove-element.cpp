class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size() ;
        int left = 0 , right = n - 1 ;
        while(left <= right) {
     if (nums[left] == val) {
                swap(nums[left], nums[right]);
                right--;
            }
            else {
                left++;
            }
        }
        return left ;
    }
};