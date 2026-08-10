class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int good = 0;
        int bad =0;
        
        for(int i=0;i<n;i++){
            if(arr[i]<=k) good++;
        }
        
        for(int i =0;i<good;i++){
            if(arr[i]>k) bad++;
        }
        int ans=bad;
        
        for(int i=0,j=good;j<n;i++,j++){
            
            if(arr[i]>k) bad--;
            if(arr[j]>k) bad++;
            
            ans = min(ans,bad);
        }
        return ans;
    }
};
