class Solution {
public:
    int largest(vector<int>& h) {
        stack<int> s;
        int ans = 0, n = h.size();

        for (int i = 0; i <= n; i++) {
            int cur = (i == n ? 0 : h[i]);

            while (!s.empty() && h[s.top()] > cur) {
                int height = h[s.top()];
                s.pop();

                int width = s.empty() ? i : i - s.top() - 1;
                ans = max(ans, height * width);
            }
            s.push(i);
        }
        return ans;
    }

    int maxArea(vector<vector<int>> &mat) {
        int r = mat.size(), c = mat[0].size();
        vector<int> h(c, 0);
        int ans = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                h[j] = mat[i][j] ? h[j] + 1 : 0;

            ans = max(ans, largest(h));
        }

        return ans;
    }
};