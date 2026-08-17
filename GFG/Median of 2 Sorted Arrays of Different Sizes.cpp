class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> c = a;

        c.insert(c.end(), b.begin(), b.end());

        sort(c.begin(), c.end());
        
        int n = c.size();

        if(n%2==0){
            return (c[n/2-1]+c[n/2])/2.0;
        }

        return c[n/2];
    }
};