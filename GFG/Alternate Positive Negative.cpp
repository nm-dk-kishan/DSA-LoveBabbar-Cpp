class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>pos,neg,ans;
        
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        
        int n=0;
        int p=0;
        
        while(p<pos.size() && n<neg.size()){
            ans.push_back(pos[p++]);
            ans.push_back(neg[n++]);
        }
        
        while(p<pos.size()){
            ans.push_back(pos[p++]);
        }
        
        while(n<neg.size()){
            ans.push_back(neg[n++]);
        }
        
        arr = ans;
    }
};