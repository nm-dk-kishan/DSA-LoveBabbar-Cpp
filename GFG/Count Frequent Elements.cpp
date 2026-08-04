class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        int num = n/k;
        
        unordered_map<int,int> freq;
        
        for(int nums:arr){
            freq[nums]++;
        }
        
        int count =0;
        for(auto val:freq){
            if(val.second > num){
                count++;
            }
        }
        
        return count;
        
    }
};