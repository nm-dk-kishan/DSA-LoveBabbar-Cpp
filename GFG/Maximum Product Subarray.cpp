class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxprod = arr[0];
        int minprod = arr[0];
        int ans = arr[0];
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]<0){
                swap(maxprod,minprod);
            }
            
            maxprod= max(arr[i],maxprod * arr[i]);
            minprod = min(arr[i],minprod*arr[i]);
            
            ans = max(maxprod,ans);
        }
        return ans;
    }
};