class Solution {
public:
    int maximumLength(vector<int>& nums) {

        unordered_map<long long,int> freq;

        for(int x : nums)
            freq[x]++;

        int ans = 1;

        // Handle 1 separately
        if(freq.count(1)){
            ans = freq[1];
            if(ans % 2 == 0) ans--;
        }

        for(auto &[num, cnt] : freq){

            if(num == 1) continue;

            long long curr = num;
            int len = 0;

            while(freq.count(curr)){

                if(freq[curr] >= 2){
                    len += 2;

                    if(curr > 1000000000LL / curr) break; // avoid overflow
                    curr *= curr;
                }
                else{
                    len++;
                    break;
                }
            }

            // If we broke due to overflow after adding two,
            // remove one because the chain cannot continue.
            if(!freq.count(curr) || (curr > 1000000000LL / max(1LL,curr))){
                if(len % 2 == 0) len--;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};