class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        for(int i=0;i<=30;i++){
            if(n==pow(4,i)) return true;
        }
        return false;
    }
};