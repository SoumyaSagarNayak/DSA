Leetcode 9: https://leetcode.com/problems/palindrome-number/description/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long num=x;
        long long rev=0;
        while(x>0){
            int ld=x%10;
            rev=(rev*10)+ld;
            x/=10;
        }
        if(num==rev){
                return true;
            }
            else {return false;}

          }
};
