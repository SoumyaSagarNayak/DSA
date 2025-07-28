class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        for ( int i = 0 ; i < boxes.size(); i++){
            int op = 0 ;
            for ( int j = 0; j < boxes.size(); ++j){
                if (boxes[j] == '1'){ //if has ball
                    op += abs (j - i);
                }
            }
            ans[i]=op;
        }
        return ans;
    }
};