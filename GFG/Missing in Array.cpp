class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int count =1;
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        for(int i =0;i<n;i++){
            if(count != arr[i]){
                return count;
            }
            count++;
        }
        return count;
    }
};