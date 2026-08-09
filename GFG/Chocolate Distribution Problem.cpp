class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        if(m == 0 || a.size() == 0) return 0;
        if(m > a.size()) return 0; // or 0 depending on platform
        sort(a.begin(),a.end());
        int diff  = INT_MAX;
        for(int i=0;i<=a.size()-m;i++){
            int x = a[i+m-1] - a[i];
            diff=min(diff,x);
        }
        return diff;
    }
};