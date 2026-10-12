class Solution {
public:
    // recursion
    int solveR(int i, vector<int>& cost, int n) {

        if (i >= n)
            return 0;

        int one = cost[i] + solveR(i + 1, cost, n);
        int two = cost[i] + solveR(i + 2, cost, n);

        return min(two, one);
    }

    // recursion + Memo
    int solveMemo(int i, vector<int>& cost, int n, vector<int>& dp) {

        if (i >= n)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int one = cost[i] + solveMemo(i + 1, cost, n, dp);
        int two = cost[i] + solveMemo(i + 2, cost, n, dp);

        return dp[i] = min(two, one);
    }

    // tabulation
    int solveTab(vector<int>& cost, int n) {

        vector<int> dp(n + 2, 0);

        for (int i = n - 1; i >= 0; i--) {
            int one = cost[i] + dp[i+1];
            int two = cost[i] + dp[i+2];

            dp[i] = min(one, two);
        }

        return min(dp[0], dp[1]);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        // recursion

        // int case1 = solveR(0,cost,n);
        // int case1 = solveR(0,cost,n);

        // return min(case1,case2);

        // r+memo
        //  vector<int> dp(n,-1);
        //  int case1 = solveMemo(0,cost,n,dp);
        //  int case2 = solveMemo(1,cost,n,dp);

        // return min(case1,case2);

        // tabulation
        return solveTab(cost, n);
    }
};