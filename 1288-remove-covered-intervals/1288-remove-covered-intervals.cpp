class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        // Step 1: Sort intervals
        sort(intervals.begin(), intervals.end(),
             [](vector<int> &a, vector<int> &b){

                // If starting points are same,
                // keep larger ending point first.
                if(a[0] == b[0])
                    return a[1] > b[1];

                // Otherwise smaller starting point first.
                return a[0] < b[0];
             });

        // First interval will always remain.
        int remaining = 1;

        // Store the largest end seen till now.
        int maxEnd = intervals[0][1];

        // Check every remaining interval.
        for(int i = 1; i < intervals.size(); i++){

            // If current interval ends after maxEnd,
            // it is NOT covered.
            if(intervals[i][1] > maxEnd){

                remaining++;

                // Update largest ending point.
                maxEnd = intervals[i][1];
            }

            // Otherwise it is covered.
            // So do nothing.
        }

        return remaining;
    }
};