class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;

            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    row.push_back(1); // first and last element is always 1
                } else {
                    // add the two numbers from the row above
                    int val = result[i - 1][j - 1] + result[i - 1][j];
                    row.push_back(val);
                }
            }

            result.push_back(row);
        }

        return result;
    }
};