class Solution {
public:
    string largestGoodInteger(string num) {
        char maxx = '\0';
        for ( int i = 0 ; i < num.size()-2;++i){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                if(num[i] > maxx){
                    maxx = num[i];
                }
            }
        }
        if(maxx != '\0'){
            return string(3,maxx);
        }else{
            return "";
        }
    }
};