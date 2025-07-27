class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<long long int> arr;
        arr.push_back(nums[0]);
        // for duplicates
        for ( long long int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                arr.push_back(nums[i]);
            }
        }
        if (arr.size() < 3) return 0;
        long long int count = 0;
        for (long long int i = 1; i < arr.size()-1; i++) {
            if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ||
                (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])) {
                count++;
            }
        }
        return count;
    }
};