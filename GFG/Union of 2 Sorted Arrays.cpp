class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> arr;
        int n = a.size();
        int m =b.size();
        int ia=0;
        int ib=0;
        
        while(ia<n && ib<m){
            if(a[ia]>b[ib]){
                if(arr.empty() || arr.back()!=b[ib]){
                    arr.push_back(b[ib]);
                }
                ib++;
            }
            else if(a[ia]<b[ib]){
                if(arr.empty() || arr.back()!=a[ia]){
                    arr.push_back(a[ia]);
                }
                ia++;
            }
            else{
                if(arr.empty() || arr.back()!=a[ia]){
                    arr.push_back(a[ia]);
                }
                
                ia++;
                ib++;
            }
        }
        
        
        while(ia<n){
            if(arr.empty() || arr.back()!=a[ia]){
                    arr.push_back(a[ia]);
                }
            ia++;
        }
        
        while(ib<m){
            if(arr.empty() || arr.back()!=b[ib]){
                    arr.push_back(b[ib]);
                }
            ib++;
        }
        return arr;
    }
};