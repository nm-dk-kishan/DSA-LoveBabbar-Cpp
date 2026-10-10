class Solution {
public:
    // recursion
    bool solveR(int i, vector<int>& nums, int n, int t) {
        if (t == 0)
            return true;
        if (i >= n)
            return false;
        if (t == 0)
            return 1;

        bool incl = solveR(i + 1, nums, n, t - nums[i]);
        bool excl = solveR(i + 1, nums, n, t);

        return incl or excl;
    }

    // recursion + Memo
    bool solveMemo(int i, vector<int>& nums, int n, int t,
                   vector<vector<int>>& dp) {
        if (t == 0)
            return true;
        if (i >= n)
            return false;

        if (dp[i][t] != -1)
            return dp[i][t];

        bool incl = 0;

        if (nums[i] <= t) {
            incl = solveMemo(i + 1, nums, n, t - nums[i], dp);
        }
        bool excl = solveMemo(i + 1, nums, n, t, dp);

        return dp[i][t] = incl or excl;
    }

    // tabulation
    bool solveTab(int n, vector<int>& nums, int total) {
        vector<vector<int>> dp(n + 1, vector<int>(total + 1, 0));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int target = 0; target <= total / 2; target++) {
                bool incl = 0;

                if (target - nums[i] >= 0)
                    incl = dp[i + 1][target - nums[i]];

                bool excl = dp[i + 1][target - 0];

                dp[i][target] = incl or excl;
            }
        }

        return dp[0][total / 2];
    }

    // so
    bool solveSO(int n, vector<int>& arr, int t) {
        vector<int> curr(t / 2 + 1, 0);
        vector<int> next(t / 2 + 1, 0);

        next[0] = 1;

        for (int i = n - 1; i >= 0; i--) {

            curr[0] = 1;

            for (int target = 0; target <= t / 2; target++) {
                bool incl = 0;

                if (target - arr[i] >= 0) {
                    incl = next[target - arr[i]];
                }
                bool excl = next[target - 0];

                curr[target] = incl || excl;
            }
            next = curr;
        }

        return next[t / 2];
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int total = 0;
        for (int i = 0; i < n; i++) {
            total = total + nums[i];
        }

        if (total & 1)
            return 0;

        int target = total / 2;

        // recursion
        //  return solveR(0,nums,n,target);

        // r+memo
        // vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        // return solveMemo(0, nums, n, target, dp);

        // tabulation
        //  return solveTab(n,nums,total);

        // so
        return solveSO(n, nums, total);
    }
};