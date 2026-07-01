class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(string pattern:patterns){
            if(pattern.size()>word.size()) continue;
            bool found=false;
            for(int i=0;i<=word.size()- pattern.size();i++){
                int j=0;
                while(j<pattern.size() && word[i+j]==pattern[j]){
                    j++;
                }
                if(j==pattern.size()){
                    found=true;
                    break;
                }
            }
            if(found)count++;
        }
        return count;
    }
};