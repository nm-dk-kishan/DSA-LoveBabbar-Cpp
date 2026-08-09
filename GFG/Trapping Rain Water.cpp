class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l = 0,r= arr.size()-1;
        int lmax = 0,rmax = 0, water = 0;
        
        while(l<r){
            if(arr[l]<arr[r]){
                
                if(arr[l]>=lmax){
                    lmax = arr[l];
                }
                else{
                    water += lmax-arr[l];
                }
                l++;
            }
            else{
                if(arr[r]>=rmax){
                    rmax = arr[r];
                }
                else{
                    water += rmax - arr[r];
                }
                r--;
            }
        }
        
        return water;
    }
};