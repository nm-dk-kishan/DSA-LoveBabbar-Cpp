class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0;
        int j=1;
        int n =arr.size();
        
        
        while(j<n && i<n){
            
            int diff = arr[j] - arr[i];
            
            if(diff == x && i!=j){
                return true;
            }
            else if(diff<x){
                j++;
            }
            else{
                i++;
            }
            
            if(i==j)j++;
        }
        
        return false;
    }
};
