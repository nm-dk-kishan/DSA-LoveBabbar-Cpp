class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<int> st;
        long long prefixSum =0;

        for(int x:arr){
            prefixSum+=x;

            if(prefixSum==0){
                return true;
            }

            if(st.count(prefixSum)){
                return true;
            }

            st.insert(prefixSum);
        }
        return false
    }