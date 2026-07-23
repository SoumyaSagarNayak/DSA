class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) arr.push_back(nums[i]);
        }
        while(arr.size()<nums.size())
            arr.push_back(0);
        
        nums = arr;
    }
};

// or
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {

//         int k = 0;

//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] != 0)
//             {
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }

//         while(k < nums.size())
//         {
//             nums[k] = 0;
//             k++;
//         }
//     }
// };