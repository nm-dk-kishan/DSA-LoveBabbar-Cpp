class Solution {
  public:
    int solveSO(vector<int> &arr){
        int n = arr.size();
        if(n==1) return arr[0];
        
        int prev2=0,prev1=arr[0];
        
        for(int i=1;i<n;i++){
            int incl = prev2+arr[i];
            int excl = prev1;
            
            int ans = max(incl,excl);
            
            prev2=prev1;
            prev1=ans;
            
        }
        
        return prev1;
    }
  
    int maxValue(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        if(n==1) return arr[0];
        
        vector<int>f,s;
        for(int i =0;i<n;i++){
            if(i!=n-1){
                f.push_back(arr[i]);
            }
            if(i!=0){
                s.push_back(arr[i]);
            }
        }
        
        return max(solveSO(f),solveSO(s));
    
    }
};
