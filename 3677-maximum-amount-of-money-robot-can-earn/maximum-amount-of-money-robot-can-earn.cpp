class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size(), n = coins[0].size();
        const int NEG = INT_MIN / 2;
        // dp[j][k]: rolling row
        vector<array<int,3>> dp(n, {NEG, NEG, NEG});

        // row 0
        for (int k = 0; k < 3; k++)
            dp[0][k] = (k > 0) ? max(coins[0][0], 0) : coins[0][0];
        for (int j = 1; j < n; j++)
            for (int k = 2; k >= 0; k--) {
                if (dp[j-1][k] != NEG)
                    dp[j][k] = max(dp[j][k], dp[j-1][k] + coins[0][j]);
                if (k > 0 && dp[j-1][k-1] != NEG)
                    dp[j][k] = max(dp[j][k], dp[j-1][k-1]);
            }

        for (int i = 1; i < m; i++) {
            vector<array<int,3>> ndp(n, {NEG, NEG, NEG});
            for (int j = 0; j < n; j++)
                for (int k = 2; k >= 0; k--) {
                    if (dp[j][k] != NEG)
                        ndp[j][k] = max(ndp[j][k], dp[j][k] + coins[i][j]);
                    if (k > 0 && dp[j][k-1] != NEG)
                        ndp[j][k] = max(ndp[j][k], dp[j][k-1]);
                    if (j > 0) {
                        if (ndp[j-1][k] != NEG)
                            ndp[j][k] = max(ndp[j][k], ndp[j-1][k] + coins[i][j]);
                        if (k > 0 && ndp[j-1][k-1] != NEG)
                            ndp[j][k] = max(ndp[j][k], ndp[j-1][k-1]);
                    }
                }
            dp = ndp;
        }
        return dp[n-1][2];
    }
};