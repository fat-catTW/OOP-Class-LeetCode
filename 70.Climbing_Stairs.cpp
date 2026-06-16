class Solution {
public:
    int climbStairs(int n) {
        if(n < 2)
            return 1;
        vector<int> record(n, 0);
        record[0] = 1;
        record[1] = 2;

        for(int i = 2 ; i < n ; i++)
        {
            record[i] = record[i - 2] + record[i - 1];
        }

        return record[n-1];
    }
};