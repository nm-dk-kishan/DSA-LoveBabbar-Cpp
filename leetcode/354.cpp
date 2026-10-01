class Solution {
public:
    int solveBS(int n, vector<vector<int>>& arr) {
        if (n == 0) return 0;

        vector<int> ans;

        ans.push_back(arr[0][1]);

        for (int i = 1; i < n; i++) {

            if (arr[i][1] > ans.back()) {
                ans.push_back(arr[i][1]);
            }
            else {
                int index = lower_bound(
                    ans.begin(), ans.end(), arr[i][1]
                ) - ans.begin();

                ans[index] = arr[i][1];
            }
        }

        return ans.size();
    }

    int solveOP(int n, vector<vector<int>>& a) {

        sort(a.begin(), a.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        return solveBS(n, a);
    }

    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();

        return solveOP(n, envelopes);
    }
};