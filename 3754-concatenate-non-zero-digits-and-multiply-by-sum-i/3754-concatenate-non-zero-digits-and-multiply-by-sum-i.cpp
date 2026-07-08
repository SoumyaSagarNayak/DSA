class Solution {
public:
    long long sumAndMultiply(int n) {
        string nw= to_string(n);
        long long x=0;
        int sum=0;
        for(char ch:nw){
            if(ch!='0'){
                x=x*10+(ch-'0');
                sum += (ch-'0');
            }
        }
        return x*sum;
    }
};