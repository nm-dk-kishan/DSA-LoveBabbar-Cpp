class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        
        if(arr.empty()) return 0;
        
        sort(arr.begin(),arr.end());
        
        int count=1;
        int ans =1;
        
        for(int i=1;i<arr.size();i++){
            
            if(arr[i]==arr[i-1]){
                continue;
            }
            
            if(arr[i] == arr[i-1]+1){
                count++;
            }
            else{
                ans = max(count,ans);
                count=1;
            }
        };
        
        ans = max(ans,count);
        return ans;
    }
};